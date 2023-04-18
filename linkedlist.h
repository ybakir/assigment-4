#include <iostream>
#include <vector>
using namespace std;


struct node							// this struct is used to implement the nodes 
{
	int data;						// we have three parameters the data value stored in the node, 			
	int occurances;					//the occurance value that stores how many times the value has occured in the node 
	node* next;						//finally the next object from the node struct which is a pointer that points to the next node


};

class linkedlist						// this linkedlist class is used to create list of nodes which are connected to eachother through pointers 
{										// this is used as a easier way to store data than a array

private:
	node* head;						// we have two objects of node the head and tail, we mainly use the head throughout this code. the tail was added to better illustrate how nodes work and better my practice
	node* tail;

public:

	linkedlist();						// this is a linkedlist constructer that creates the linked list

	void insertNode(int d, int o);		// this insertnode function that adds a node into the linked list

	void DeleteNode(int deletevalue);  // this delete enode function that deletes the node from the linked list

	void print();						// this print function that outputs all the nodes into the linked list

	int sumnodes();						// this sum of node function that adds up all the occurances of the node 

};

