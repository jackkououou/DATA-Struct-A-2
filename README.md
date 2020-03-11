# DATA-Struct-A-2
Linked List hw
Define a structure called Date with only month, day and year as its integer private members and to be used as the node type for a linked list.

Define a class called LinkedList with a Date pointer called head as its private member to be used to point to the first (head) node of a linked list.

Define a constructor to initialize head to NULL, destructor to free all dynamically allocated nodes, a copy constructor, overloaded assignment operator 
and a display() member function for displaying all the nodes' data (all the dates).

Also, include a push_front() public member function for adding a new node at the front of the list, a remove_front() public member function for
removing the node at the front, a pop_front() public member function for displaying the front node, a push_back(), a remove_back() and a pop_back()
public member function for inserting a new node at the back, for removing the node at the back and for displaying the node at the back, respectively, a 
search() member function for searching the list for a given date:

int LinkedList::search(const Date& date)

which will return the node number (starting from 0) where the date was found or will return -1 if not found.

Write a main function to test the class, which will first instantiate a LinkedList and then keep asking the user if he or she wants to add a new node (Date) to 
the list. If the answer is 'y' or 'Y', it will allocate dynamic memory for a new Date structure and push it at the front of the list, until the user answers with a 'n' or 'N' to creating a new node.

Then, when finished with creating the list, the program must continuously present a menu to the user with options to:

1. Display all elements of the list (using display function)

2. Insert new node - which will ask to front or back (using push functions)

3. Remove node - which will ask from front or back (using remove functions)

4. Find a node - which will ask for a date to search for (using search function)

5. Display a node - which will ask if the front or the back node (using pop functions)

6. Quit

Submit separate cpp files for main program and function definitions and the header file for defining the class and the structure.
