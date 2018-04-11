/*********************************************************************
** Program name: Grocery Shopping List
** Author: Diana Oh
** Date: 4/30/2017
** Description: The grocery shopping list program gives a customer an option to add an item to the cart,
*remove an item from the cart, and display the current items in the cart. If a user adds an item name
*that already exists, they are given the choice to either replace the item or do nothing.
*
*The program can be run using the makefile.
**********************************************************************/
/* Menu Class displays menu, allows user to add menu options, and verifies the input entered by the user
* via the inputValidation function.
*/

#ifndef MENU_H
#define MENU_H
#include <string>
#include <vector>
#include "inputValidation.h"

using namespace std;

class Menu
{

private:

	vector<string>m;
	int number; 

public:

	Menu(int param);
	void addMember(string title);
	void displayMenu();
	void setNumberofOptions(int param);
	int verifyAndReturn();
};


#endif
