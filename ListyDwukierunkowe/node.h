#ifndef NODE_H
#define NODE_H

class Node{
public:
	int data;
	Node* next;
	Node* previous;
	 
	Node(int value) : data(value), next(nullptr), previous(nullptr) {}
};

#endif