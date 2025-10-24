#include "Factory.h"

list* Factory::createlist() {
	return new list();
}