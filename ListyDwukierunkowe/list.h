#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Node.h"
#include "Iterator.h"

class list {
private:
    node* head;
    node* tail;

public:
	list();

	void push_front(int number);
	void push_back(int number);
	void push_at(int number, int index);

	void pop_back();
	void pop_front();
	void pop_at(int index);

	void show();
	void showReverse();
	void show_next(int index);
	void show_previous(int index);

	void clear();

	~list();
};

#endif
