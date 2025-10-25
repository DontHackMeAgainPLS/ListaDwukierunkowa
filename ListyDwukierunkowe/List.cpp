/**
 * @file List.cpp
 * @brief Implementacja metod klasy list.
 */

#include <iostream>
#include "Node.h"
#include "Iterator.h"
#include "List.h"

using namespace std;

/**
 * @brief Konstruktor klasy list.
 *
 * Inicjalizuje pust¹ listê.
 */
list::list() {
	head = nullptr;
	tail = nullptr;
}

/**
 * @brief Dodaje nowy element na pocz¹tku listy.
 *
 * @param number Wartoœæ do wstawienia.
 */
void list::push_front(int number) {
	node* newEl = new node(number);
	if (head != nullptr) {
		head->previous = newEl;
<<<<<<< HEAD
		newEl->next = head;
=======
		newEl->next = head; // zmieniam adresy aby nowy element byl na poczatek
>>>>>>> parent of bd37a0e (Finalna wersja programu)
	}
	else {
		tail = newEl;
	}
<<<<<<< HEAD
	head = newEl;
=======
	head = newEl; // dodaje nowy element na poczatek
>>>>>>> parent of bd37a0e (Finalna wersja programu)
}

/**
 * @brief Dodaje nowy element na koñcu listy.
 *
 * @param number Wartoœæ do wstawienia.
 */
void list::push_back(int number) {
	node* newEl = new node(number);
	if (tail != nullptr) {
		tail->next = newEl;
<<<<<<< HEAD
		newEl->previous = tail;
=======
		newEl->previous = tail; // zmieniam adresy aby nowy element byl na koncu
>>>>>>> parent of bd37a0e (Finalna wersja programu)
	}
	else {
		head = newEl;
	}
<<<<<<< HEAD
	tail = newEl;
=======
	tail = newEl; // dodaje nowy element na koniec
>>>>>>> parent of bd37a0e (Finalna wersja programu)
}

/**
 * @brief Dodaje nowy element na okreœlonym indeksie.
 *
 * @param number Wartoœæ do wstawienia.
 * @param index Indeks wstawienia.
 */
void list::push_at(int number, int index) {
	if (index <= 0) {
		push_front(number); // Poprawka: dla index <= 0 wstawiamy na pocz¹tku
		return;
	}

	node* current = head;

	int i = 0;
	while (current && i < index - 1) {
		current = current->next;
		i++;
	}

	if (!current) {
		push_back(number); // Wstaw na koñcu, jeœli index jest poza zakresem
		return;
	}

	node* newEl = new node(number);
	newEl->next = current->next;
	newEl->previous = current;

	if (current->next) {
<<<<<<< HEAD
		current->next->previous = newEl;
=======
		current->next->previous = newEl; //zmieniam w nastepnym elemecie poprzedni adres na nowo utworzony 
>>>>>>> parent of bd37a0e (Finalna wersja programu)
	}

	else {
		tail = newEl;
	}

<<<<<<< HEAD
	current->next = newEl;
=======
	current->next = newEl; //zamieniam wskaznik na nastepny element na nowo utworzony element
>>>>>>> parent of bd37a0e (Finalna wersja programu)
}

/**
 * @brief Usuwa element z koñca listy.
 */
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

<<<<<<< HEAD
/**
 * @brief Usuwa element z pocz¹tku listy.
 */
void list::pop_front() {
=======
void list ::pop_front() { //usuwam pierwszy element
>>>>>>> parent of bd37a0e (Finalna wersja programu)
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

/**
 * @brief Usuwa element z podanego indeksu.
 *
 * @param index Indeks elementu do usuniêcia.
 */
void list::pop_at(int index) {
	if (!head) return;
	if (index == 0) { pop_front(); return; }

	node* current = head;
	int i = 0;
	while (current && i < index) {
		current = current->next;
		i++;
	}
	if (!current) return;

<<<<<<< HEAD
	if (current->previous) current->previous->next = current->next;
	if (current->next) current->next->previous = current->previous;
	if (current == tail) tail = current->previous;
	delete current;
}

/**
 * @brief Wyœwietla wszystkie elementy listy od pocz¹tku.
 */
void list::show() {
=======
	if (current->previous) current->previous->next = current->next; //zamieniam next elementu poprzedniego 
	if (current->next) current->next->previous = current->previous; //zamieniam previous elementu nastepnego
	if (current == tail) tail = current->previous; //jezeli element jet ostatni to zamieniam tylko poprzedni element
	delete current; //i usuwam aktualny element 
}

void list::show() { // przechodze przez kolejne iteracje poprzez metode next w iteratorze
>>>>>>> parent of bd37a0e (Finalna wersja programu)
	listIterator it(head, false);
	if (!it.hasNext()) {
		cout << "Lista jest pusta\n";
		return;
	}
	while (it.hasNext()) {
		cout << it.next() << "\n";
	}
}

/**
 * @brief Wyœwietla wartoœæ elementu nastêpnego po elemencie o danym indeksie.
 *
 * @param index Indeks elementu, którego nastêpnik jest wyœwietlany.
 */
void list::show_next(int index) {
	if (!head) {
		cout << "Lista jest pusta.\n";
		return;
	}

	node* current = head;
	int i = 0;

<<<<<<< HEAD
	while (current && i < index) {
=======
	while (current && i < index) {//znajduje element o szukanym indeksie 
>>>>>>> parent of bd37a0e (Finalna wersja programu)
		current = current->next;
		i++;
	}

	if (!current) {
		cout << "Nie ma elementu o indeksie " << index << ".\n";
		return;
	}

	if (current->next) {
		cout << "Nastepny po indeksie " << index << " (" << current->data
<<<<<<< HEAD
			<< ") to: " << current->next->data << endl;
	}
	else {
		cout << "Element o indeksie " << index << " (" << current->data << ") jest ostatni (brak nastepnego).\n";
=======
			<< ") to: " << current->next->data << endl; //wyswietlam dane z nastepnego elementu
>>>>>>> parent of bd37a0e (Finalna wersja programu)
	}
}

/**
 * @brief Wyœwietla wartoœæ elementu poprzedniego dla elementu o danym indeksie.
 *
 * @param index Indeks elementu, którego poprzednik jest wyœwietlany.
 */
void list::show_previous(int index) {
	if (!head) {
		cout << "Lista jest pusta.\n";
		return;
	}

	node* current = head;
	int i = 0;

<<<<<<< HEAD
	while (current && i < index) {
=======
	while (current && i < index) { //znajduje element o szukanym indeksie 
>>>>>>> parent of bd37a0e (Finalna wersja programu)
		current = current->next;
		i++;
	}

	if (!current) {
		cout << "Nie ma elementu o indeksie " << index << ".\n";
		return;
	}

<<<<<<< HEAD
	// UWAGA: Sprawdzam current->previous, a nie current->next jak w oryginalnym kodzie!
	if (current->previous) {
		cout << "Poprzedni dla indeksu " << index << " (" << current->data
			<< ") to: " << current->previous->data << endl;
	}
	else {
		cout << "Element o indeksie " << index << " (" << current->data << ") jest pierwszy (brak poprzedniego).\n";
	}
}

/**
 * @brief Wyœwietla wszystkie elementy listy od koñca do pocz¹tku.
 */
void list::showReverse() {
=======
	if (current->next) {
		cout << "Poprzedni po indeksie " << index << " (" << current->data
			<< ") to: " << current->previous->data << endl; //wyswietlam dane z poprzedniego elementu
	}
}

void list::showReverse() { // przechodze przez kolejne iteracje poprzez metode previous w iteratorze
>>>>>>> parent of bd37a0e (Finalna wersja programu)
	listIterator it(tail, true);
	// Zmieniono: iteruje siê tak d³ugo, jak 'current' nie jest nullptr, u¿ywaj¹c 'previous'
	if (tail == nullptr) {
		cout << "Lista jest pusta\n";
		return;
	}
	while (it.hasPrevious()) {
		cout << it.previous() << "\n";
	}
}


/**
 * @brief Usuwa wszystkie elementy z listy i zwalnia pamiêæ.
 */
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


/**
 * @brief Destruktor klasy list.
 *
 * Zwalnia pamiêæ zajmowan¹ przez wszystkie wêz³y.
 */
list::~list() {
	node* current = head;
	while (current != nullptr) {
		node* next = current->next;
		delete current;
		current = next;
	}
}