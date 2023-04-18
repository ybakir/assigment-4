#include "linkedlist.h"

linkedlist::linkedlist()
{
	head = NULL;								// making both our key attributes equal to null
	tail = NULL;
}


void linkedlist::insertNode(int d, int o)			// this insertnode implementation takes the data value which is inputed on the noode and occurances of that value
{
	node* t = new node;								// this is a temporary node which is used to store the data and occurance values of the user 
	node* save = head;								// this saves the head as a node so we are able to have a copy of the head to peform the right conditions without altering the actual head 

	t->data = d;					
	t->occurances = o;								// temp node assigns data, occurances and next values in the temp node 
	t->next = tail;



	if (head == NULL)								// this if condition states if the head is empty then there is no node in the list at the head is point
	{
		head = t;
	}
	else											// else if the head is pointing at a node and the user wants to add another node
	{
		while (save->next != NULL) { save = save->next; } // we first use a while loop to go through the all the nodes by using the condition that if the pointer of the node is not null then go to the next node and check all of them until it is null meaning this the last node

		save->next = t;									// the node's pointer is equal to the temp node
	}
	
		

	
}


void linkedlist::DeleteNode(int deletevalue)  // this delete node implementation takes the delete value which is inputed by the user to remove the desired node from the list 
{
	if (head != NULL)						// this if condition states if the head is not empty  then then peform the actions below else the linked list is empty
	{

		if (head->data == deletevalue)		// if the head's data value is equal to the delete value then create a temp node and save the head and move the head to the next slot
		{
			node* tmp = head;				// this is a temporary node which is used to store the head
			head = head->next;				// head is moved to the next node after the head
			delete tmp;					// you then delete the temp which has the first node
		}

		node* save = head;													// this is another temporary node which is used to store the head
		while (save->next != NULL && save->next->data != deletevalue)		// while loop with two conditions if the next node pointer is equaled to the null and the next node pointer is not eqaul to the desired delete value
		{
			save = save->next;												//  this makes the temp node equal to the next node through the pointer
		}
			
		if (save->next == NULL)										// if condition where if the next node pointer is equal to null then we take the first temp node as the next node after save node
		{
			node* tmp = save->next;				
			save->next = save->next->next;				//	we then make the save's next node is equal to the next node which is the save node pointer pointing at the next node
			delete tmp;									// we then delete the temp value 
		}	

	}
	else
	{
		cout << " the linked list is empty try again" << endl;		// this is a temporary node which is used to store the data and occurance values of the user 
	}


}


void linkedlist::print()				// this print function implementation goes through the whole linked list by using a while loop to check if the temp node is not equal to null and outputs all the nodes that are avaliable and how many occurances are there 
{
	node* save = head;						// this is a temporary node which is used to store the head
	while (save != NULL)	               // use a while loop to go through the all the nodes by using the condition that if the temp node is not null then go to the next node and check all of them until it reaches the end of the list
	{
		cout << save->data << " : occurances : " << save->occurances << endl;		//print the data of the node and the number of occurances of the node
		save = save->next;															// we then make the temp node equal to the next node of temp through the pointer
	}
}

int linkedlist::sumnodes()				// this sum of nodes implementation calculates the how many occurances have occured of the data value
{
	int c = 0;							// the counter variable is initialized 
	node* cnode = head;					// this is a temporary node which is used to store the head

	while (cnode != NULL)				// use a while loop to go through the all the nodes 
	{
		c = c + cnode->occurances;		// it will add the occurances to the counter 
		cnode = cnode->next;			// then we'll move to the next node
	}

	return c;							// return the counter
}
