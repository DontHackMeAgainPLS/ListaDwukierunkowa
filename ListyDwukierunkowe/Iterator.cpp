
#include "Iterator.h"

listIterator::listIterator(node* start, bool reverseOrder) {
	current = start;
	reverse = reverseOrder;
}

bool listIterator::hasNext() {
	if (current != nullptr) {
		return true;
	}
	else {
		return false;
	}
}

int listIterator::next() {
	int value = current->data;
	current = current->next;
	return value;
}

bool listIterator::hasPrevious() {
	if (reverse && current != nullptr) {
		return true;
	}
	else {
		return false;
	}
}

int listIterator::previous() {
	int value = current->data;
	current = current->previous;
	return value;
}