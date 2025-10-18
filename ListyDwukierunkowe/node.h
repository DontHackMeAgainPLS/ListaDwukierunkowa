#ifndef NODE_H
#define NODE_H

class node{
public:
	int data;
	node* next;
	node* previous;
	 
	Node(int value) : data(value), next(nullptr), previous(nullptr) {}
};

#endif