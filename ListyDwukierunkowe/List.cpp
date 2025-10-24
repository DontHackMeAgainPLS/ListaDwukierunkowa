#include <iostream>
#include "Node.h"
#include "Iterator.h"
#include "List.h"

using namespace std; 

list::list() {
	head = nullptr;
	tail = nullptr;
}

void list::push_front(int number) {
	node* newEl = new node(number);
	if (head != nullptr) {
		head->previous = newEl;
		newEl->next = head; // zmieniam adresy aby nowy element byl na poczatek
	}
	else {
		tail = newEl;
	}
	head = newEl; // dodaje nowy element na poczatek
}

void list ::push_back(int number) {
	node* newEl = new node(number);
	if (tail != nullptr) {
		tail->next = newEl;
		newEl->previous = tail; // zmieniam adresy aby nowy element byl na koncu
	}
	else {
		head = newEl;
	}
	tail = newEl; // dodaje nowy element na koniec
}

void list ::push_at(int number, int index) {
	if (index <= 0) {
		push_back(number);
		return;
	}

	node* current = head;

	int i = 0;
	while (current && i < index - 1) {
		current = current->next;
		i++;
	}

	if (!current) {
		push_back(number);
		return;
	}

	node* newEl = new node(number);
	newEl->next = current->next;
	newEl->previous = current;

	if (current->next) {
		current->next->previous = newEl; //zmieniam w nastepnym elemecie poprzedni adres na nowo utworzony 
	}

	else {
		tail = newEl;
	}

	current->next = newEl; //zamieniam wskaznik na nastepny element na nowo utworzony element
}

void list::pop_back() {
	if (tail == nullptr) {//usuwam ostatni element
		return;
	}
	node* temp = tail;
	tail = tail->previous;

	if (tail != nullptr) {
		tail->next = nullptr;
	}
	else {
		head = nullptr;
	}

	delete temp;
}

void list ::pop_front() { //usuwam pierwszy element
	if (head == nullptr) {
		return;
	}
	node* temp = head;
	head = head->next;

	if (head != nullptr) {
		head->previous = nullptr;
	}
	else {
		tail = nullptr;
	}

	delete temp;
}

void list ::pop_at(int index) {
	if (!head) return;
	if (index == 0) { pop_front(); return; }

	node* current = head;
	int i = 0;
	while (current && i < index) {
		current = current->next;
		i++;
	}
	if (!current) return;

	if (current->previous) current->previous->next = current->next; //zamieniam next elementu poprzedniego 
	if (current->next) current->next->previous = current->previous; //zamieniam previous elementu nastepnego
	if (current == tail) tail = current->previous; //jezeli element jet ostatni to zamieniam tylko poprzedni element
	delete current; //i usuwam aktualny element 
}

void list::show() { // przechodze przez kolejne iteracje poprzez metode next w iteratorze
	listIterator it(head, false);
	if (!it.hasNext()) {
		cout << "Lista jest pusta\n";
		return;
	}
	while (it.hasNext()) {
		cout << it.next() << "\n";
	}
}

void list ::show_next(int index) {
	if (!head) {
		cout << "Lista jest pusta.\n";
		return;
	}

	node* current = head;
	int i = 0;

	while (current && i < index) {//znajduje element o szukanym indeksie 
		current = current->next;
		i++;
	}

	if (!current) {
		cout << "Nie ma elementu o indeksie " << index << ".\n";
		return;
	}

	if (current->next) {
		cout << "Nastepny po indeksie " << index << " (" << current->data
			<< ") to: " << current->next->data << endl; //wyswietlam dane z nastepnego elementu
	}
}

void list::show_previous(int index) {
	if (!head) {
		cout << "Lista jest pusta.\n";
		return;
	}

	node* current = head;
	int i = 0;

	while (current && i < index) { //znajduje element o szukanym indeksie 
		current = current->next;
		i++;
	}

	if (!current) {
		cout << "Nie ma elementu o indeksie " << index << ".\n";
		return;
	}

	if (current->next) {
		cout << "Poprzedni po indeksie " << index << " (" << current->data
			<< ") to: " << current->previous->data << endl; //wyswietlam dane z poprzedniego elementu
	}
}

void list::showReverse() { // przechodze przez kolejne iteracje poprzez metode previous w iteratorze
	listIterator it(tail, true);
	if (!it.hasPrevious()) {
		cout << "Lista jest pusta\n";
		return;
	}
	while (it.hasPrevious()) {
		cout << it.previous() << "\n";
	}
}


void list::clear() {
	node* current = head;
	while (current) { //przechodze do head i robie kopie do temp zeby nastepnie przejsc do niej, nastepnie usuwam head
		node* temp = current->next;
		delete current;
		current = temp;
	}
	head = nullptr;
	tail = nullptr;
}


list::~list() {
	node* current = head;
	while (current != nullptr) {
		node* next = current->next;
		delete current;
		current = next;
	}
}
