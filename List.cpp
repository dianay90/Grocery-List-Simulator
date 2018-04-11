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

#include "List.h"
#include <iostream>
#include <string>
#include "Item.h"
#include "inputValidation.h"
using namespace std; 

//List constructor set initial cart capacity to 4, sets itemsInCart to zerio, and dynaically creates an array. 
List::List()
{
	cartCapacity = 4; 

	itemsInCart = 0;

	shoppingList = new Item*[cartCapacity];
	

}

//The addItem() function adds an items to a person's cart and if a user enters an already existing item name, they are asked if the duplicate 
//item should replace the existing item. 

void List::addItem()

{
	string itemName, unitType;
	int quantity = 0, unitPrice=0, input=0; 
	bool flag = true;
	

	//Fill out the item information 

	cout << "Please enter the item name: " << endl; 
	itemName = stringInputValidation(); 
	

	cout << "Please enter the unit type (i.e. can, box, pound, or ounce). " <<endl;
	unitType = stringInputValidation();
	

	cout << "Please enter the quantity. " << endl;
	quantity = integerInputValidation(1,100000000);

	

	cout << "Please enter the unit price. " << endl;
	unitPrice = integerInputValidation(0,100000000);

	  Item* itemObject= new Item(itemName, unitType, quantity, unitPrice);



	if (itemsInCart ==0)
	{
		shoppingList[itemsInCart] = itemObject;
		itemsInCart++; 
	
		return; 


	}

	//If current items matches already existing item

		if (*this == *(itemObject))
		{
			cout << "This item already exists. Would you like to replace it? Enter 1 for yes or 2 for no." << endl;
			input = integerInputValidation(1,2);

			if (input == 1)

				for (int i = 0; i < itemsInCart; i++)
				{
					if (shoppingList[i]->getItemName() == itemName)

					{
						shoppingList[i]= itemObject;
	
					}

					else {
						flag = false;
					}

				}

			else
			{
				flag = false; 
			}
		}
		else 
			{

			if (itemsInCart < cartCapacity)
			{
	
				shoppingList[itemsInCart] = itemObject;
				itemsInCart++; 



			}
			else if (itemsInCart >= cartCapacity)

					{
						increaseCartCapacity();
						shoppingList[itemsInCart] = itemObject;
						itemsInCart++;
					}
				}

		

		}

//List destructor 
List::~List()
{

	
	for (int i=0; i<itemsInCart; i++)
	{
		
		delete shoppingList[i]; 
		cout << i; 

	}

	delete []shoppingList;

}




//The increaseCartCapacity function expands the intital cart size of four when additional items are added to the cart. 
void List::increaseCartCapacity()
{
	cartCapacity += 4;

	Item** shoppingListCopy = new Item*[cartCapacity];
	for (int i=0; i<itemsInCart; i++)
	{
		
		shoppingListCopy[i] = shoppingList[i]; 
	}


	//deleting old cart 
	delete [] shoppingList; 
	

	shoppingList = shoppingListCopy; 


}

//The operator== function compares a list object to an item object and returns true if the name of the item matches an 
//already existing item in the customer’s current shopping list. 

bool List::operator==( Item &right)



{

	
	for (int i=0; i< itemsInCart; i++)
	{
		if (shoppingList[i]->getItemName() == right.getItemName()) 
		{
			return true;

		}

	}

	
	
		return false;
	
}

//The remove item functions removes an item from the user's cart. 

void List::removeItem()

{
	
	string itemName;
	

	

	cout << "Please enter the item name you want to remove: " << endl;
	itemName = stringInputValidation();

	
	for (int i = 0; i < itemsInCart; i++)
		//make everything after remove go up a space and then move that to a temp array

	{

		if (itemName == shoppingList[i]->getItemName())




		{
			delete shoppingList[i];

			for (int j = i; j < itemsInCart -1 ; j++)

			{
				
				shoppingList[j] = shoppingList[j + 1];
				//the spot of the removed item gets taken by the items that appears after it. 
				//J goes until itemsInCart-1 since shoppingList[j+1] accounts for the last item
			}

		}
	}
	
	itemsInCart--; 
	//remove the last item 

	
}




//The printList functions displayed the user's cart list. 
void List::printList()
{

	int total = 0; 
	


	if (itemsInCart ==0)
	{
		cout << "Item: " << ' ' << endl;
		cout << "Quantity: " << ' ' << endl;
		cout << "Unit Price: " << ' ' << endl;
		cout << "Unit Type: " << ' ' << endl;
		cout << "Subtotal: " << ' ' << endl;


	}


	for  (int i=0; i<itemsInCart; i++)
	
	
	{
		cout << endl;
		cout << endl;

		cout << "Item: " << shoppingList[i]->getItemName() << endl;
		cout << "Quantity: " << shoppingList[i]->getQuantity() << endl;
		cout << "Unit Price: " << shoppingList[i]->getUnitPrice() << endl;
		cout << "Unit Type: " << shoppingList[i]->getUnitType() << endl;
		cout << "Subtotal: " << shoppingList[i]->getExtendedPrice() << endl;

		cout << endl; 
		cout << endl;

	}

	for (int i=0; i<itemsInCart; i++)
	{
		// add up all the subtotal 
		total += shoppingList[i]->getExtendedPrice();
	}

	cout << "Total Price: " << total << endl; 


}




