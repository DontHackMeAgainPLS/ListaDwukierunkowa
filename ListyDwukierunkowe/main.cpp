
#include <iostream>
#include "Factory.h"
using namespace std;

int main()
{
	list* lista = Factory::createlist();

	lista->push_front(1);
	lista->push_front(2);
	lista->push_front(3);
	lista->push_back(4);
	lista->push_at(5, 1);

	lista->show();
	lista->showReverse();
	cout << endl;

	lista->pop_back();
	lista->show();

	cout << endl;

	lista->pop_front();
	lista->push_front(3);
	lista->show();

	cout << endl;

	lista->pop_at(1);
	lista->show();

	cout << endl;
	lista->show_next(1);
	lista->show_previous(1);

	lista->showReverse();

	lista->clear();
	cout << endl;
	lista->show();

	delete lista; // zwolnienie pamięci
	return 0;
}

