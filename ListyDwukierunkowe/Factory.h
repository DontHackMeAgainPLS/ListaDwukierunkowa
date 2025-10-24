/**
 * @file Factory.h
 * @brief Definicja klasy Factory, implementuj�cej wzorzec Fabryki
 * do tworzenia obiekt�w listy.
 */

#ifndef FACTORY_H
#define FACTORY_H

#include "List.h"

 /**
  * @class Factory
  * @brief Statyczna klasa fabryczna, odpowiedzialna za alokacj�
  * i inicjalizacj� nowych obiekt�w typu list.
  */
class Factory {
public:
	/**
	 * @brief Statyczna metoda tworz�ca now� instancj� klasy list.
	 *
	 * U�ywa operatora new do dynamicznej alokacji obiektu listy.
	 *
	 * @return Wska�nik na nowo utworzony obiekt list.
	 */
	static list* createlist();
};

#endif