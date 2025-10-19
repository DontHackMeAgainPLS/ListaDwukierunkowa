#ifndef FACTORY_H
#define FACTORY_H

#include "list.h"


class Factory {
	static list* createLista() {
	return new list();
	}
};

#endif