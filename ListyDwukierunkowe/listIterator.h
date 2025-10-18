#ifndef ITERATOR_H
#define ITERATOR_H

#include node.h

class listIterator {
private:
	node* current;
public:
	explicit listIterator(node* start) :current(start) {}

	bool hasNext() const {
		return current != nullptr && next != nullptr;
	}

	bool hasPrevious() const {
		return current != nullptr && previous != nullptr;
	}

	int next() {
		int value = current->data;
		current = current->next;
		return value;
	}

	int previous() {
		int value = current->data;
		current = current->previous;
		return value;
	}


};

#endif // !ITERATOR_H 
