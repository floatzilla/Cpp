// Arrays.cpp
//contains intmain() voidprintinventory() voidprintShop() boolbuyItems()

#include "pch.h"
#include <iostream>
#include <string>
const int numItems = 6;
const std::string shopItemNames[numItems] = { "Boots","Swords","Helmets","Kittens","Polearms","Leggings" };


void printInventory(const int playerInventory[numItems]);
void printShop();
bool buyItems(int playerInventory[numItems]);


int main()
{
	//this tells when the game is over.
	bool isDone = false;

	//Player inventory stored in an array.
	int playerInventory[numItems] = {0,0,0,1,0,0};


	std::cout << "Welcome to the item shop!\n";
	
	//The loop for choosing items.
	while (isDone==false) 
	{
		printShop();
		printInventory(playerInventory);
		isDone = buyItems(playerInventory);
		std::cout << "\n\n\n";
	}

	system("PAUSE");
	return 0;

}
void printInventory(const int playerInventory[numItems])
{
	std::cout << "\n\nYour inventory is: \n";
	//This will loop through each item one at a time and print them out.
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
	for (int i = 0; i < numItems; i++)
	{
		std::cout << i + 1 << ". " << shopItemNames[i] << std::endl;
	}
	std::cout << "*****************\n\n";
}
bool buyItems(int playerInventory[numItems])
{
	int input;
	std::cout << "\nWhat would you like to buy? Enter -1 to quit.\nEnter 1 - " << numItems << ":";
	std::cin >> input;
	if (input == -1)
	{
		return true;//This will end the program.
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
