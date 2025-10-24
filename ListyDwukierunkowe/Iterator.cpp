/**
 * @file Iterator.cpp
 * @brief Implementacja metod klasy listIterator.
 */

#include "Iterator.h"

 /**
  * @brief Konstruktor iteratora.
  *
  * Inicjalizuje iterator, ustawiaj¹c go na podanym wêŸle startowym
  * i okreœla kierunek iteracji.
  *
  * @param start WskaŸnik na wêze³ startowy.
  * @param reverseOrder Okreœla kierunek iteracji.
  */
listIterator::listIterator(node* start, bool reverseOrder) {
	current = start;
	reverse = reverseOrder;
}

/**
 * @brief Sprawdza, czy istnieje nastêpny element do przodu.
 *
 * @return true, jeœli current != nullptr; false w przeciwnym razie.
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
 * @brief Pobiera wartoœæ z aktualnego wêz³a i przesuwa iterator do przodu.
 *
 * Zwraca 'data' z aktualnego wêz³a i ustawia 'current' na 'current->next'.
 *
 * @return Wartoœæ typu int.
 */
int listIterator::next() {
	int value = current->data;
	current = current->next;
	return value;
}

/**
 * @brief Sprawdza, czy istnieje poprzedni element (tylko w trybie reverse).
 *
 * Warunek: tryb reverse jest aktywny ORAZ current jest ró¿ny od nullptr.
 *
 * @return true, jeœli warunki s¹ spe³nione; false w przeciwnym razie.
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
 * @brief Pobiera wartoœæ z aktualnego wêz³a i przesuwa iterator wstecz.
 *
 * Zwraca 'data' z aktualnego wêz³a i ustawia 'current' na 'current->previous'.
 *
 * @return Wartoœæ typu int.
 */
int listIterator::previous() {
	int value = current->data;
	current = current->previous;
	return value;
}