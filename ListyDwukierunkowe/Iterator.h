/**
 * @file Iterator.h
 * @brief Definicja klasy listIterator, umo¿liwiaj¹cej iteracjê
 * po elementach listy dwukierunkowej.
 */

#ifndef ITERATOR_H
#define ITERATOR_H

#include "Node.h"

 /**
  * @class listIterator
  * @brief Klasa iteratora, przechowuj¹ca aktualn¹ pozycjê (wêze³)
  * i kontroluj¹ca kierunek przejœcia.
  */
class listIterator {
private:
	/**
	 * @var current
	 * @brief WskaŸnik na aktualnie przetwarzany wêze³ (element listy).
	 */
	node* current;

	/**
	 * @var reverse
	 * @brief Flaga okreœlaj¹ca, czy iteracja odbywa siê w odwrotnym kierunku (true),
	 * czy w standardowym (false).
	 */
	bool reverse;

public:
	/**
	 * @brief Konstruktor iteratora.
	 *
	 * Inicjalizuje iterator, ustawiaj¹c go na podanym wêŸle startowym.
	 *
	 * @param start WskaŸnik na wêze³, od którego ma rozpocz¹æ siê iteracja.
	 * @param reverseOrder Opcjonalny parametr: true, aby iterowaæ wstecz; false (domyœlnie), aby iterowaæ do przodu.
	 */
	listIterator(node* start, bool reverseOrder = false);

	/**
	 * @brief Sprawdza, czy istnieje nastêpny element do przodu.
	 *
	 * Zwraca true, jeœli wskaŸnik 'current' nie jest nullptr.
	 *
	 * @return true, jeœli jest nastêpny element; false w przeciwnym razie.
	 */
	bool hasNext();

	/**
	 * @brief Pobiera wartoœæ z aktualnego wêz³a i przesuwa iterator do przodu.
	 *
	 * **UWAGA:** U¿ytkownik musi sprawdziæ hasNext() przed u¿yciem tej metody,
	 * aby unikn¹æ b³êdu dostêpu do nullptr.
	 *
	 * @return Wartoœæ typu int (data) przechowywana w aktualnym wêŸle.
	 */
	int next();

	/**
	 * @brief Sprawdza, czy istnieje poprzedni element (tylko w trybie reverse).
	 *
	 * Zwraca true, jeœli jest to tryb wsteczny (reverse == true) i wskaŸnik 'current' nie jest nullptr.
	 *
	 * @return true, jeœli jest poprzedni element w trybie reverse; false w przeciwnym razie.
	 */
	bool hasPrevious();

	/**
	 * @brief Pobiera wartoœæ z aktualnego wêz³a i przesuwa iterator wstecz.
	 *
	 * Ta metoda jest przeznaczona do u¿ycia w trybie reverse.
	 * **UWAGA:** U¿ytkownik musi sprawdziæ hasPrevious() przed u¿yciem tej metody.
	 *
	 * @return Wartoœæ typu int (data) przechowywana w aktualnym wêŸle.
	 */
	int previous();
};

#endif