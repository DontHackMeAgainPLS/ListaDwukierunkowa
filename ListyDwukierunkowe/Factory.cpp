/**
 * @file Factory.cpp
 * @brief Implementacja metod klasy Factory.
 */

#include "Factory.h"

 /**
  * @brief Tworzy now� instancj� klasy list.
  *
  * @return Wska�nik na nowo utworzony obiekt list.
  */
list* Factory::createlist() {
	return new list();
}