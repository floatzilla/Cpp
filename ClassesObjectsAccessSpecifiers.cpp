//This is the example for Classes Objects and Access Specifiers.
//John G

#include "pch.h"
#include <iostream>
#include <string>

class Monster //----------------------------Monster Class---------
{
public:
	void growl()
	{
		std::cout << "Growl!!!\n";
	}
	std::string name;
};

int main()//-----------------------------------MAIN---------------
{
	Monster monster1;//sourced from 'class Monster'
	monster1.growl();
	

	system("PAUSE");
	return 0;

}
//End of program
