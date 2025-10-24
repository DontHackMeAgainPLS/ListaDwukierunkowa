/**
 * @file Iterator.h
 * @brief Definicja klasy listIterator, umo�liwiaj�cej iteracj�
 * po elementach listy dwukierunkowej.
 */

#ifndef ITERATOR_H
#define ITERATOR_H

#include "Node.h"

 /**
  * @class listIterator
  * @brief Klasa iteratora, przechowuj�ca aktualn� pozycj� (w�ze�)
  * i kontroluj�ca kierunek przej�cia.
  */
class listIterator {
private:
	/**
	 * @var current
	 * @brief Wska�nik na aktualnie przetwarzany w�ze� (element listy).
	 */
	node* current;

	/**
	 * @var reverse
	 * @brief Flaga okre�laj�ca, czy iteracja odbywa si� w odwrotnym kierunku (true),
	 * czy w standardowym (false).
	 */
	bool reverse;

public:
	/**
	 * @brief Konstruktor iteratora.
	 *
	 * Inicjalizuje iterator, ustawiaj�c go na podanym w�le startowym.
	 *
	 * @param start Wska�nik na w�ze�, od kt�rego ma rozpocz�� si� iteracja.
	 * @param reverseOrder Opcjonalny parametr: true, aby iterowa� wstecz; false (domy�lnie), aby iterowa� do przodu.
	 */
	listIterator(node* start, bool reverseOrder = false);

	/**
	 * @brief Sprawdza, czy istnieje nast�pny element do przodu.
	 *
	 * Zwraca true, je�li wska�nik 'current' nie jest nullptr.
	 *
	 * @return true, je�li jest nast�pny element; false w przeciwnym razie.
	 */
	bool hasNext();

	/**
	 * @brief Pobiera warto�� z aktualnego w�z�a i przesuwa iterator do przodu.
	 *
	 * **UWAGA:** U�ytkownik musi sprawdzi� hasNext() przed u�yciem tej metody,
	 * aby unikn�� b��du dost�pu do nullptr.
	 *
	 * @return Warto�� typu int (data) przechowywana w aktualnym w�le.
	 */
	int next();

	/**
	 * @brief Sprawdza, czy istnieje poprzedni element (tylko w trybie reverse).
	 *
	 * Zwraca true, je�li jest to tryb wsteczny (reverse == true) i wska�nik 'current' nie jest nullptr.
	 *
	 * @return true, je�li jest poprzedni element w trybie reverse; false w przeciwnym razie.
	 */
	bool hasPrevious();

	/**
	 * @brief Pobiera warto�� z aktualnego w�z�a i przesuwa iterator wstecz.
	 *
	 * Ta metoda jest przeznaczona do u�ycia w trybie reverse.
	 * **UWAGA:** U�ytkownik musi sprawdzi� hasPrevious() przed u�yciem tej metody.
	 *
	 * @return Warto�� typu int (data) przechowywana w aktualnym w�le.
	 */
	int previous();
};

#endif