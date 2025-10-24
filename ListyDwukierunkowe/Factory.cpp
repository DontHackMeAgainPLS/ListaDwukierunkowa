/**
 * @file Factory.cpp
 * @brief Implementacja metod klasy Factory.
 */

#include "Factory.h"

 /**
  * @brief Tworzy now¹ instancjê klasy list.
  *
  * @return WskaŸnik na nowo utworzony obiekt list.
  */
list* Factory::createlist() {
	return new list();
}