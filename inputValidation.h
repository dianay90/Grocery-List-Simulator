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
/* Input validation function validates user input to ensure it's an integer. It take in arguments integer min and 
integer max to ensure the input the user enters is within that range and returns an int. 
*/



#ifndef INPUTVALIDATION_H
#define INPUTVALIDATION_H
#include <iostream>
using namespace std;
#include <string>

	int integerInputValidation(int min, int max);
	string stringInputValidation();

#endif



