/**
 * @file List.h
 * @brief Definicja klasy list, implementuj¹cej strukturê danych
 * w postaci dwukierunkowej listy powi¹zanej.
 */

#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Node.h"
#include "Iterator.h"

 /**
  * @class list
  * @brief Klasa implementuj¹ca dwukierunkow¹ listê powi¹zan¹.
  *
  * Umo¿liwia dodawanie, usuwanie i wyœwietlanie elementów.
  */
class list {
private:
	/**
	 * @var head
	 * @brief WskaŸnik na pierwszy element (g³owê) listy.
	 */
	node* head;

	/**
	 * @var tail
	 * @brief WskaŸnik na ostatni element (ogon) listy.
	 */
	node* tail;

public:
	/**
	 * @brief Konstruktor klasy list.
	 *
	 * Inicjalizuje pust¹ listê, ustawiaj¹c head i tail na nullptr.
	 */
	list();

	/**
	 * @brief Dodaje nowy element na pocz¹tku listy.
	 *
	 * @param number Wartoœæ typu int, któr¹ ma zawieraæ nowy element.
	 */
	void push_front(int number);

	/**
	 * @brief Dodaje nowy element na koñcu listy.
	 *
	 * @param number Wartoœæ typu int, któr¹ ma zawieraæ nowy element.
	 */
	void push_back(int number);

	/**
	 * @brief Dodaje nowy element na okreœlonym indeksie.
	 *
	 * Jeœli index jest <= 0, element jest dodawany na koniec.
	 * Jeœli index przekracza rozmiar listy, równie¿ jest dodawany na koniec.
	 *
	 * @param number Wartoœæ typu int, któr¹ ma zawieraæ nowy element.
	 * @param index Indeks, na którym ma zostaæ wstawiony element (0 to pocz¹tek).
	 */
	void push_at(int number, int index);

	/**
	 * @brief Usuwa element z koñca listy.
	 */
	void pop_back();

	/**
	 * @brief Usuwa element z pocz¹tku listy.
	 */
	void pop_front();

	/**
	 * @brief Usuwa element z podanego indeksu.
	 *
	 * Jeœli index jest poza zakresem, metoda nie wykonuje ¿adnej operacji.
	 *
	 * @param index Indeks elementu do usuniêcia.
	 */
	void pop_at(int index);

	/**
	 * @brief Wyœwietla wszystkie elementy listy, id¹c od g³owy do ogona.
	 *
	 * U¿ywa iteratora w standardowym trybie.
	 */
	void show();

	/**
	 * @brief Wyœwietla wszystkie elementy listy, id¹c od ogona do g³owy.
	 *
	 * U¿ywa iteratora w trybie reverse.
	 */
	void showReverse();

	/**
	 * @brief Wyœwietla wartoœæ elementu nastêpnego po elemencie o danym indeksie.
	 *
	 * Wypisuje element, który jest kolejny na liœcie po podanym indeksie.
	 *
	 * @param index Indeks elementu, którego nastêpnika chcemy zobaczyæ.
	 */
	void show_next(int index);

	/**
	 * @brief Wyœwietla wartoœæ elementu poprzedniego dla elementu o danym indeksie.
	 *
	 * Wypisuje element, który jest poprzedni na liœcie dla podanego indeksu.
	 *
	 * @param index Indeks elementu, którego poprzednika chcemy zobaczyæ.
	 */
	void show_previous(int index);

	/**
	 * @brief Usuwa wszystkie elementy z listy, zwalniaj¹c pamiêæ.
	 *
	 * Ustawia head i tail na nullptr.
	 */
	void clear();

	/**
	 * @brief Destruktor klasy list.
	 *
	 * Zwalnia pamiêæ zajmowan¹ przez wszystkie wêz³y listy.
	 */
	~list();
};

#endif