#ifndef ITERATOR_H
#define ITERATOR_H

class listIterator {
private:
	node* current;
public:
	explicit listIterator(node* start) :current(start) {}

	bool hasNext() const {
		return current != nullptr;
	}

	bool hasPrevious() const {
		return previous != nullptr;
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
