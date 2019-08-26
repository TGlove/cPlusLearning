#include "pch.h"
#include <iostream>
using namespace std;
class NodeType {
public:	
	int info;
	NodeType *link;
};

class linklist {
public:
	NodeType* head;
	int size;
	linklist() {
		this->head = NULL;
		this->size = 0;
	}
	void clear();
	~linklist() {
		clear();
	}
	//~linklist();
	void insertFirst(int);
	void insertEnd(int);
	void display();
};


void main()
{
	linklist lk;
	lk.insertFirst(55);
	lk.insertFirst(17);
	lk.insertFirst(62);
	lk.insertFirst(33);
	
	lk.insertEnd(11);
	lk.insertEnd(22);
	lk.insertEnd(33);
	lk.insertEnd(44);
	lk.display();
}

void linklist::insertFirst(int val)
{
	NodeType *newNode = new NodeType;
	newNode->info = val;
	newNode->link = head;
	head = newNode;
	size++;
}

void linklist::insertEnd(int val)
{
	NodeType *newNode = new NodeType;
	newNode->info = val;
	newNode->link = NULL;

	if (head == NULL) {
		head = newNode;
	}
	else
	{
		NodeType *last = head;
		while (last->link!=NULL) {
			last = last->link;
		}
		last->link = newNode;
	}
	size++;
}

void linklist::clear()
{
	NodeType *current = head;
	while (head!=NULL)
	{
		current = current->link;
		delete head;
		head = current;
	}
	size = 0;
}

void linklist::display()
{
	NodeType *current = head;
	while (current!=NULL) {
		cout << current->info << endl;
		current = current->link;
	}
}
