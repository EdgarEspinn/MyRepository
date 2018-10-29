// Edgar Espin
// 10/22/2018
// Linked List Assignment
#include <iostream>
using namespace std;

// ~~~~~~~~~~~~~~~~~~  Linked list  ~~~~~~~~~~~~~~~~~~  
class NodeType {

public:
	NodeType(int = 0);			// constructor with default value

	void insert(int value);		// inserts new node

	void printList();			// prints the list

	void deleteNode();

private:
	int info;					// data	
	NodeType *nextPtr, *head;	// pointers
};

// ~~~~~~~~~~~~~~~~~~  Constructor  ~~~~~~~~~~~~~~~~~~ 
NodeType::NodeType(int data)
{
	head = NULL;
	info = data;
	nextPtr = nullptr;
}
 // Needs CONSTRUCTOR

// ~~~~~~~~~~~~~~~~~~  Insert  ~~~~~~~~~~~~~~~~~~ 
void NodeType::insert(int value)
{
	NodeType *currentPtr;

	currentPtr = new NodeType;		// Create new Node
	currentPtr->info = value;		// Initialize
	currentPtr->nextPtr = head;		// Current's next pointer points to head
	head = currentPtr;				// Current is the head
}

// ~~~~~~~~~~~~~~~~~~  Print  ~~~~~~~~~~~~~~~~~~ 
void NodeType::printList()
{
	NodeType *temp = head;

	while (temp != NULL)
	{
		cout << temp->info << " ";
		temp = temp->nextPtr;
	}
}

// ~~~~~~~~~~~~~~~~~~  Delete  ~~~~~~~~~~~~~~~~~~ 
void NodeType::deleteNode()
{
	NodeType *temp = head;

	head = temp->nextPtr;
	delete temp;
}

// ~~~~~~~~~~~~~~~~~~  Main  ~~~~~~~~~~~~~~~~~~ 
int main()
{
	NodeType list;
	int choice = 0;
	int inputNum = 0;

	cout << "(1) Add\n";
	cout << "(2) Print\n";
	cout << "(3) Delete\n";
	cout << "(4) Quit\n";
	cout << "Enter the number choice: ";
	

	while (choice != 4)
	{
		cin >> choice;

		// Add to list
		if (choice == 1)
		{
			cout << "Enter the value: ";
			cin >> inputNum;

			list.insert(inputNum);
		}
		// Print list
		if (choice == 2)
		{
			list.printList();
			cout << endl;
		} 
		// Delete node
		if (choice == 3)
		{
			list.deleteNode();
		}
		// Quit
		if (choice == 4)
		{
			cout << "Goodbye.\n";
		}
		else // Invalid 
		{
			cout << "Try again.\n";
		}
	}

	system("PAUSE");
	return 0;
}
