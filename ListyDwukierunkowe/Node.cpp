#include "Node.h"

node::node(int value) {
	data = value;
	previous = nullptr;
	next = nullptr;
}