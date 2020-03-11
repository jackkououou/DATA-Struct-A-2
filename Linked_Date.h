#ifndef Linked_Date
#define Linked_Date
struct Date
{
	friend class LinkedList;
private:
	int month, day, year;
public:
	Date();
	Date(int in_month, int in_day, int in_year);
	void setValue(int month, int day, int year);
	bool operator== (const Date& right);
	~Date();
};

using namespace std;
class LinkedList
{
private:
	
	typedef struct Node
	{
		Date data;
		Node* next;
		Node()
		{
			next = NULL;
		}
	}* Nodeptr; // allows Nodeptr to replace Node* 
	Nodeptr head, curr, temp;

public:
	LinkedList();
	/*LinkedList(const LinkedList& obj);*/
	/*const LinkedList& operator= (const Date& right);*/
	
	void Display_List();
	void pushFront(Date obj);
	void pushBack(Date obj);
	void removeFront();
	void popFront();
	void removeBack();
	void popBack();
	int Search( Date obj);
	void Search_Print(int index);

	~LinkedList();
};

#endif Linked_Date