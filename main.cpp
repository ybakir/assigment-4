#include "linkedlist.h"


void createlinkedlist(linkedlist &l, vector<int>& v1)
{
	bool* occcheck = new bool[v1.size()];
	int oc = 0;

	for (int i = 0; i < v1.size(); i++) { occcheck[i] = 0;}

	for (int y = 0; y < v1.size(); y++) {
		for (int x = 0; x < v1.size(); x++) {
			if (v1[x] == v1[y]) {
				occcheck[x] = 1;
				oc++;
			}
		}
		l.insertNode(v1[y], oc);
		oc = 0;
	}

	delete[] occcheck;
}

void insertAfter(int f, int s, vector<int>& v1)
{
	vector<int>::iterator i;
	i = find(v1.begin(), v1.end(), f);

	if (i == v1.end()) {
		cout << "error: try again" << endl;
	}
	v1.insert(i + 1, s);

	
}


int main()
{
	int n;
	int num;
	int first;
	int second;
	linkedlist l;

	cout << "enter the number of integers " << endl;
	cin >> n;

	vector<int> vect;

	for (int i = 0; i < n; i++)
	{
		cout << "enter " << i + 1 << "  value in the vector ";
		cin >> num;
		vect.push_back(num);
	}

	cout << "enter the first value" << endl;
	cin >> first;

	cout << "enter the second value" << endl;
	cin >> second;


	insertAfter(first, second, vect);

	cout << "------------------------------------------------------" << endl;
	createlinkedlist(l,vect);
	l.print();
	cout << "------------------------------------------------------" << endl;

	cout<<"the sum of the nodes is "<<l.sumnodes();
}

	


	






