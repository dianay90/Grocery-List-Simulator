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

#include <iostream>
#include <string>
using namespace std;
#include "inputValidation.h"
#include <cctype>



int integerInputValidation(int min, int max)
{
	bool flag = false;
	bool flag2 = false;
	string userString;
	int number;

	while (flag == false)
	{
		getline(cin, userString);
		flag2 = true; 
		for (int index = 0; index < userString.length() && flag2==true; index++)

		{
			// if the input is a digit 
			if (isdigit(userString[index])) //then make flag, is the flag is true outstide return the number 
											//
			{
				flag2 = true;
			}

			else

			{
				flag2 = false; 
				cout << "Input is invalid. Please enter a valid number." << endl;
				//flag = false;
			}

			
		}

				//convert that number to an integer data type
		// there are no digits here
		if (flag2 == true)
			{
				number = stoi(userString);
				if ((number >= min) && (number <= max))
				{
					return number;
				}


				//digt can't be out of dounds 
				else
				{
					cout << "Input is invalid. Please enter a valid number." << endl;
					flag = false;
				}
			}



		
		}
	}






string stringInputValidation()
{
	bool flag = false;
	bool flag2 = false;
	bool flag3 = true;
	string userString;
	int number;

	while (flag == false)
	{
		getline(cin, userString);
		flag2 = true; 
		for (int index = 0; index < userString.length() && flag2==true; index++)

		{ //ed$%^$
		//#$%#$%gdgd
			// if the input is a digit 
			if (isalpha(userString[index])) //then make flag, is the flag is true outstide return the number 
											//
			{
				flag2 = true;
				//problem the last number in the string can be OKAY and my code wille xecute
				
			}  //df$%%45
			    //d%%^^^h

			else

			{
				flag2 = false;
				
				cout << "Input is invalid. Please enter a valid input without any spaces." << endl;
				//flag = false;
			}

			
		}

		if (flag2== true)
		{
			return userString; 
		}
		
	}

}
				
				
