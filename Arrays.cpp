// Arrays.cpp

#include "pch.h"
#include <iostream>
#include <string>
const int numItems = 6;//this constant is used in intmain, printinventory, and printshop.
const std::string shopItemNames[numItems] = { "Boots","Swords","Helmets","Kittens","Polearms","Leggings" };//all the shop items are here.

void printInventory(const int playerInventory[numItems]);
void printShop();
bool buyItems(int playerInventory[numItems]);

int main()
{
	bool isDone = false;//this tells when the game is over.
	int playerInventory[numItems] = {0,0,0,1,0,0};//Player inventory stored in an array. This starts the player with one kitten.
	std::cout << "Welcome to the item shop!\n";
	//The loop for choosing items.
	while (isDone==false) 
	{
		printShop();//goes to void printShop()
		printInventory(playerInventory);//goes to void printInventory(). References the playerInventory in this function.
		isDone = buyItems(playerInventory);
		std::cout << "\n\n\n";
	}

	system("PAUSE");
	return 0;

}
void printInventory(const int playerInventory[numItems])//const must be added here so that it knows to update the playerInventory in intMain() and not make its own version.
{
	std::cout << "\n\nYour inventory is: \n";
	//This will loop through each item one at a time and print them out with a value given if the player has that item, if the item is 0 it will nto display.
	for (int i = 0; i < numItems; i++) 
	{
		if (playerInventory[i]>0)
		{
			std::cout << playerInventory[i] << " x " << shopItemNames[i]<<std::endl;
		}
	}
	std::cout << std::endl;
}
void printShop()
{
	std::cout << "Shop Inventory: \n";
	for (int i = 0; i < numItems; i++)//start at i=o and go to i<6
	{
		std::cout << i + 1 << ". " << shopItemNames[i] << std::endl;//shopItemNames is a global constant.
	}
	std::cout << "*****************\n\n";
}
bool buyItems(int playerInventory[numItems])//this will basically set the limits for what hte player can choose. -1 will exit, 1-6 will give an item and anything >6 will return an error to the player.
{
	int input;
	std::cout << "\nWhat would you like to buy? Enter -1 to quit.\nEnter 1 - " << numItems << ":";
	std::cin >> input;
	if (input == -1)
	{
		return true;//This will end the program because it causes isDone==true which in intMain() exits the while loop and goes to return 0.
	}
	if ((input - 1 < 0) || (input > numItems))
	{
		std::cout << "That was a bad choice!\n";
		system("PAUSE"); 
		return false;

	}
	playerInventory[input - 1]++;
	return false;
}
