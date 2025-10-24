/**
 * @file Iterator.cpp
 * @brief Implementacja metod klasy listIterator.
 */

#include "Iterator.h"

 /**
  * @brief Konstruktor iteratora.
  *
  * Inicjalizuje iterator, ustawiaj�c go na podanym w�le startowym
  * i okre�la kierunek iteracji.
  *
  * @param start Wska�nik na w�ze� startowy.
  * @param reverseOrder Okre�la kierunek iteracji.
  */
listIterator::listIterator(node* start, bool reverseOrder) {
	current = start;
	reverse = reverseOrder;
}

/**
 * @brief Sprawdza, czy istnieje nast�pny element do przodu.
 *
 * @return true, je�li current != nullptr; false w przeciwnym razie.
 */
bool listIterator::hasNext() {
	if (current != nullptr) {
		return true;
	}
	else {
		return false;
	}
}

/**
 * @brief Pobiera warto�� z aktualnego w�z�a i przesuwa iterator do przodu.
 *
 * Zwraca 'data' z aktualnego w�z�a i ustawia 'current' na 'current->next'.
 *
 * @return Warto�� typu int.
 */
int listIterator::next() {
	int value = current->data;
	current = current->next;
	return value;
}

/**
 * @brief Sprawdza, czy istnieje poprzedni element (tylko w trybie reverse).
 *
 * Warunek: tryb reverse jest aktywny ORAZ current jest r�ny od nullptr.
 *
 * @return true, je�li warunki s� spe�nione; false w przeciwnym razie.
 */
bool listIterator::hasPrevious() {
	if (reverse && current != nullptr) {
		return true;
	}
	else {
		return false;
	}
}

/**
 * @brief Pobiera warto�� z aktualnego w�z�a i przesuwa iterator wstecz.
 *
 * Zwraca 'data' z aktualnego w�z�a i ustawia 'current' na 'current->previous'.
 *
 * @return Warto�� typu int.
 */
int listIterator::previous() {
	int value = current->data;
	current = current->previous;
	return value;
}