/**
 * @file Node.cpp
 * @brief Implementacja metod klasy node.
 */

#include "Node.h"

 /**
  * @brief Konstruktor klasy node.
  *
  * Inicjalizuje wêze³ podan¹ wartoœci¹. WskaŸniki 'next' i 'previous'
  * s¹ ustawiane na nullptr.
  *
  * (Uwaga: Ten komentarz jest powtórzeniem z pliku .h i jest opcjonalny,
  * ale zapewnia pe³n¹ dokumentacjê w implementacji).
  *
  * @param value Wartoœæ, która ma byæ przechowywana w wêŸle.
  */
node::node(int value) {
	data = value;
	previous = nullptr;
	next = nullptr;
}