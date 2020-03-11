#include <iostream>
#include "Linked_Date.h"

using namespace std;
int main()
{
	int choice = 0;
	int choice_BF = 0;
	LinkedList List;
	Date temp;
	int month = 0, day = 0, year = 0;
	do
	{
		cout	<< "1. Display all elements of the list " << endl
				<< "2. Insert new node" << endl
				<< "3. Remove node" << endl
				<< "4. Find a node" << endl
				<< "5. Display a node (front or back)" << endl
				<< "6. Quit" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			List.Display_List();
			break;
		case 2:
			cout << "Enter date to insert (MM DD YYYY): " << endl;
			cin >> month >> day >> year;
			temp.setValue(month, day, year);
			cout << "1. Front" << endl
				<< "2. Back" << endl;
			cin >> choice_BF;
			if (choice_BF == 1)
				List.pushFront(temp);
			else
				List.pushBack(temp);
			break;
		case 3:
			cout << "1. Front" << endl
				<< "2. Back" << endl;
			cin >> choice_BF;
			if (choice_BF == 1)
				List.removeFront();
			else
				List.removeBack();
			break;
		case 4:
			cout << "Enter date to search (MM DD YYYY): " << endl;
			cin >> month >> day >> year;
			temp.setValue(month, day, year);
			List.Search_Print(List.Search(temp));
			break;
		case 5:
			cout << "1. Front" << endl
				<< "2. Back" << endl;
			cin >> choice_BF;
			if (choice_BF == 1)
				List.popFront();
			else
				List.popBack();

			break;
		case 6:
			break;
		}
	} while (choice != 6);




	List.~LinkedList();


	system("pause");
	return 0;
}