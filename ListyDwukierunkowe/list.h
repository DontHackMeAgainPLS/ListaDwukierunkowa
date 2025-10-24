/**
 * @file List.h
 * @brief Definicja klasy list, implementuj�cej struktur� danych
 * w postaci dwukierunkowej listy powi�zanej.
 */

#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Node.h"
#include "Iterator.h"

 /**
  * @class list
  * @brief Klasa implementuj�ca dwukierunkow� list� powi�zan�.
  *
  * Umo�liwia dodawanie, usuwanie i wy�wietlanie element�w.
  */
class list {
private:
	/**
	 * @var head
	 * @brief Wska�nik na pierwszy element (g�ow�) listy.
	 */
	node* head;

	/**
	 * @var tail
	 * @brief Wska�nik na ostatni element (ogon) listy.
	 */
	node* tail;

public:
	/**
	 * @brief Konstruktor klasy list.
	 *
	 * Inicjalizuje pust� list�, ustawiaj�c head i tail na nullptr.
	 */
	list();

	/**
	 * @brief Dodaje nowy element na pocz�tku listy.
	 *
	 * @param number Warto�� typu int, kt�r� ma zawiera� nowy element.
	 */
	void push_front(int number);

	/**
	 * @brief Dodaje nowy element na ko�cu listy.
	 *
	 * @param number Warto�� typu int, kt�r� ma zawiera� nowy element.
	 */
	void push_back(int number);

	/**
	 * @brief Dodaje nowy element na okre�lonym indeksie.
	 *
	 * Je�li index jest <= 0, element jest dodawany na koniec.
	 * Je�li index przekracza rozmiar listy, r�wnie� jest dodawany na koniec.
	 *
	 * @param number Warto�� typu int, kt�r� ma zawiera� nowy element.
	 * @param index Indeks, na kt�rym ma zosta� wstawiony element (0 to pocz�tek).
	 */
	void push_at(int number, int index);

	/**
	 * @brief Usuwa element z ko�ca listy.
	 */
	void pop_back();

	/**
	 * @brief Usuwa element z pocz�tku listy.
	 */
	void pop_front();

	/**
	 * @brief Usuwa element z podanego indeksu.
	 *
	 * Je�li index jest poza zakresem, metoda nie wykonuje �adnej operacji.
	 *
	 * @param index Indeks elementu do usuni�cia.
	 */
	void pop_at(int index);

	/**
	 * @brief Wy�wietla wszystkie elementy listy, id�c od g�owy do ogona.
	 *
	 * U�ywa iteratora w standardowym trybie.
	 */
	void show();

	/**
	 * @brief Wy�wietla wszystkie elementy listy, id�c od ogona do g�owy.
	 *
	 * U�ywa iteratora w trybie reverse.
	 */
	void showReverse();

	/**
	 * @brief Wy�wietla warto�� elementu nast�pnego po elemencie o danym indeksie.
	 *
	 * Wypisuje element, kt�ry jest kolejny na li�cie po podanym indeksie.
	 *
	 * @param index Indeks elementu, kt�rego nast�pnika chcemy zobaczy�.
	 */
	void show_next(int index);

	/**
	 * @brief Wy�wietla warto�� elementu poprzedniego dla elementu o danym indeksie.
	 *
	 * Wypisuje element, kt�ry jest poprzedni na li�cie dla podanego indeksu.
	 *
	 * @param index Indeks elementu, kt�rego poprzednika chcemy zobaczy�.
	 */
	void show_previous(int index);

	/**
	 * @brief Usuwa wszystkie elementy z listy, zwalniaj�c pami��.
	 *
	 * Ustawia head i tail na nullptr.
	 */
	void clear();

	/**
	 * @brief Destruktor klasy list.
	 *
	 * Zwalnia pami�� zajmowan� przez wszystkie w�z�y listy.
	 */
	~list();
};

#endif