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


#include <iostream>
using namespace std;
#include "inputValidation.h"
#include "Item.h"
#include <cmath>
#include <string>


Item::Item(string itemName, string unitType, int quantity, int unitPrice)
{
	this->itemName = itemName; 
	this->unitType = unitType;
	this->quantity= quantity; 
	this->unitPrice = unitPrice; 

}


Item::Item()
{
	itemName = "";
	unitType = " ";
	quantity = 0;
	unitPrice = 0;

}



int Item::getExtendedPrice()
{

	return quantity * unitPrice; 
}


string Item::getUnitType()
{
	
	return unitType; 
}

string Item::getItemName()
{
	
	return itemName; 

}

int Item::getQuantity()
{

	return quantity;

}


int Item::getUnitPrice()
{

	return unitPrice;

}