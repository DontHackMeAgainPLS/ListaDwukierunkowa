/**
 * @file Node.cpp
 * @brief Implementacja metod klasy node.
 */

#include "Node.h"

 /**
  * @brief Konstruktor klasy node.
  *
  * Inicjalizuje w�ze� podan� warto�ci�. Wska�niki 'next' i 'previous'
  * s� ustawiane na nullptr.
  *
  * (Uwaga: Ten komentarz jest powt�rzeniem z pliku .h i jest opcjonalny,
  * ale zapewnia pe�n� dokumentacj� w implementacji).
  *
  * @param value Warto��, kt�ra ma by� przechowywana w w�le.
  */
node::node(int value) {
	data = value;
	previous = nullptr;
	next = nullptr;
}