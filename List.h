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
The List class contains the members Item** shoppingList, cartCapacity, and itemsInCart. The methods are 
printList, which displays the user’s cart, addItem, which adds an item to the users cart, removeItem(), 
which removes an item from the user’s cart, increaseCartcapacity(), which increase the cart capacity 
after its initial capacity of four is exceeded, and the operator==  function, which compares a list 
object to an item object and returns true if the name of the item matches an already existing 
item in the customer’s current shopping list.

*/
#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;
#include "inputValidation.h"
#include "Item.h"

class List

{
	
private: 


	
	Item **shoppingList;
	int cartCapacity;
	int itemsInCart;
	


public:
	
	List(); 
	void printList();  
	void addItem(); 
	void removeItem(); 
	void increaseCartCapacity();
	bool operator==( Item &right);
	~List();



};
#endif 