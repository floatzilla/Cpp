// classesandobjects.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include <string>

class Monster 
{
public:
	void growl()
	{
		std::cout << "Growl!!!\n";
	}
	void setName(std::string name)//setter function
	{
		_name = name;
	}
	std::string getName()//getter function
	{
		return _name;
	}
private:
	std::string _name;
};

int main()//-----------------------------------MAIN---------------
{
	Monster monster1;
	monster1.growl();
	monster1.setName("George");
	std::cout << monster1.getName() << std::endl;
	system("PAUSE");
	return 0;

}
