/**
 * @file Factory.h
 * @brief Definicja klasy Factory, implementuj¹cej wzorzec Fabryki
 * do tworzenia obiektów listy.
 */

#ifndef FACTORY_H
#define FACTORY_H

#include "List.h"

 /**
  * @class Factory
  * @brief Statyczna klasa fabryczna, odpowiedzialna za alokacjê
  * i inicjalizacjê nowych obiektów typu list.
  */
class Factory {
public:
	/**
	 * @brief Statyczna metoda tworz¹ca now¹ instancjê klasy list.
	 *
	 * U¿ywa operatora new do dynamicznej alokacji obiektu listy.
	 *
	 * @return WskaŸnik na nowo utworzony obiekt list.
	 */
	static list* createlist();
};

#endif