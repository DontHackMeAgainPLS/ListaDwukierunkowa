
#ifndef ITERATOR_H
#define ITERATOR_H

#include "Node.h"


class listIterator {
private:

	node* current;

	bool reverse;

public:

	listIterator(node* start, bool reverseOrder = false);

	bool hasNext();

	int next();

	bool hasPrevious();

	int previous();
};

#endif