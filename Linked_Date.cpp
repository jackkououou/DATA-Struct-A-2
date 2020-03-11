#include <iostream>
#include "Linked_Date.h"

using namespace std;

Date::Date()
{
	month = 0;
	day = 0;
	year = 0;
}
Date::Date(int in_month, int in_day, int in_year)
{
	month = in_month;
	day = in_day;
	year = in_year;
}
void Date::setValue(int in_month, int in_day, int in_year)
{
	month = in_month;
	day = in_day;
	year = in_year;
}
Date::~Date()
{


}
bool Date::operator== (const Date& right) 
{
	return(month == right.month && day == right.day && year == right.year);
}
//********************
//	LinkedList Def
//********************

LinkedList::LinkedList()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}
//LinkedList::LinkedList(const Date& obj)
//{
//	
//}
//const LinkedList& LinkedList::operator=(const Date& right)
//{
//	Nodeptr temp = new Node;
//	temp->data = right;
//
//	return right;
//}
void LinkedList::Display_List()
{
	int num = 1;
	if (head != NULL)
	{
		curr = head;
		do
		{
			cout << num << ". " << curr->data.month << '/' << curr->data.day << '/' << curr->data.year << endl;
			curr = curr->next;
			num++;
		} while (curr->next != NULL);
		
	}
	else
	{
		cout << "No items in list to display." << endl;
	}
}
void LinkedList::popFront()
{
	if (head != NULL)
	{
		cout << head->data.month << '/' << head->data.day << '/' << head->data.year << endl;
	}
	else
	{
		cout << "No items in list to display." << endl;
	}
}
void LinkedList::popBack()
{
	if (head != NULL)
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		cout << curr->data.month << '/' << curr->data.day << '/' << curr->data.year << endl;
	}
	else
	{
		cout << "No items in list to display." << endl;
	}
}
void LinkedList::pushFront(Date obj)
{
	Nodeptr n = new Node;
	n->data = obj;
	curr = head;
	if (curr == NULL)
	{
		head = n;
		cout << "New node added has been added to the front of the list!" << endl;
	}
	else
	{
		n->next = head;
		head = n;
		cout << "New node added has been added to the front of the list!" << endl;
	}
}
void LinkedList::pushBack(Date obj)
{
	Nodeptr n = new Node;
	n->next = NULL;
	n->data = obj;
	if (head != NULL)
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}
void LinkedList::removeFront()
{
	curr = head;
	if (curr == NULL)
	{
		cout << "List contains no items to remove." << endl;
	}
	else
	{
		if (curr->next != NULL)
		{
			delete head;
			head = curr->next;
			curr = head;
			cout << "Front node removed." << endl;
		}
		else
		{
			delete head;
			head = NULL;
			curr = NULL;
		}
	}
}
void LinkedList::removeBack()
{
	curr = head;
	if (curr == NULL)
	{
		cout << "List contains no items to remove." << endl;
	}
	else
	{
		if (curr->next != NULL)
		{
			while (curr->next != NULL)
			{
				temp = curr;			//Saves the position before the last node
				curr = curr->next;		//Saves the position of the last node

			}
			temp->next = NULL;
			delete curr;
			cout << "Back node removed." << endl;
		}
		else
		{
			delete head;
			curr = NULL;
			cout << "Back node removed." << endl;
		}
	}
}
int LinkedList::Search(Date obj)
{
	if (head != NULL)
	{
		int index = 0;
		bool found = false;
		curr = head;
		if (curr->data == obj)
		{
			return index;
			found = true;
		}
		else
			index++;
		while (curr->next != NULL && !found)
		{
			curr = curr->next;
			if (curr->data == obj)
			{
				return index;
				found = true;
			}
			else
				index++;
		}
		if (!found)
			return -1;
	}
}
void LinkedList::Search_Print(int index)
{
	int count = 0;
	curr = head;
	if (index != -1)
	{
		while (count < index)
		{
			curr = curr->next;
			count++;
		}
		cout << curr->data.month << '/' << curr->data.day << '/' << curr->data.year << endl;
	}
	else
	{
		cout << "Date not found." << endl;
	}
}
LinkedList::~LinkedList()
{
	curr = head;
	do 
	{
		temp = curr->next;
		delete curr;
		curr = temp;
	} while (curr->next != NULL);
	delete head;
	delete temp;
}