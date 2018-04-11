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

#include <iostream>
#include "Menu.h"
#include "inputValidation.h"
using namespace std;
#include <string>

Menu::Menu(int param)
{
	vector<string>m;
	setNumberofOptions(param);


}

//The addMember function adds options to the menu vector when the options are passed as arguments to the function.

void Menu::addMember(string title)

{

	m.push_back(title);
}

//displayMenu function displays the vector's contents
void Menu::displayMenu()
{
	for (int i = 0; i < m.size(); i++)
		cout << m[i] << endl;

}


/*Sets the number of options you want the menu to have. This is done when you pass the number of options you want
as an argument. */
void Menu::setNumberofOptions(int param)
{

	number = param; 
}


/*Verify the user selection from the menu options and make sure the user selected something from the actual menu.
 If they did, the function returns the user input as an integer.*/
int Menu::verifyAndReturn()

{
	//string userInput;
	int userInput2;
	bool flag;

	while (flag == false)

	{
		cout << endl; 
		cout << "Please make a selection from the menu options above." << endl;
		userInput2 = integerInputValidation(0,3);

		if ((userInput2 > 0) && (userInput2 <= number))
		{
			return userInput2;
		}

		else
		{
			flag = false;
		}

	}
}

