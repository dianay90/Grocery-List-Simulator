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

#include "List.h"
#include "Item.h"
#include "Menu.h"
#include "inputValidation.h"
#include <iostream>
using namespace std;
#include <cmath>

int main()


{
	int menuChoice = 0;
	bool flag = false;

	Menu m(5);
	List* listObject = new List;



	m.addMember("Please select an option below.");
	m.addMember("1.Add Item");
	m.addMember("2.Remove Item");
	m.addMember("3. Display List");
	m.addMember("4. Exit");

	while (flag == false)
	{
		
		cout << endl;
		cout << endl;
		cout << endl;
		m.displayMenu();

		menuChoice = integerInputValidation(1, 4);


		if (menuChoice == 1)
		{
			//cout << "before add item" << listObject->itemsInCart << endl; 

			listObject->addItem();

		}

		if (menuChoice == 2)

		{
			listObject->removeItem();
		}

		if (menuChoice == 3)

		{
			listObject->printList();
		}

		if (menuChoice == 4)

		{
			
			cout << "You have exited" << endl; 
			
			flag = true;

		}

	}
	

	delete listObject; 
	return 0;
}