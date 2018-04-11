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

/*
*The Item class has itemName, unitType, quantity, unitPrice, and extendedPrice as member variables.
*This class also includes get methods for each member variable. My item class mainly functions to store user
*input into the appropriate variables that will then work with the list class.
*/

#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
#include "inputValidation.h"
#include <cmath>
using namespace std;



class Item

{

private:
	string itemName; 
	string unitType; 
	int quantity;
	int unitPrice;
	int extendedPrice; //you have to print this to the screen. it's quantity to buy times unit price 

public:



	Item(string itemName, string unitType, int quantity, int unitPrice);
	Item(); 
	int getExtendedPrice();
	string getUnitType();
	string getItemName(); 
	int getQuantity();
	int getUnitPrice();


};
#endif 



