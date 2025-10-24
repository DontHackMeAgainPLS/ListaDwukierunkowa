/**
 * @file Node.h
 * @brief Definicja klasy node, reprezentuj¹cej pojedynczy element
 * w strukturze danych w tym przypadku liœcie dwukierunkowej.
 */

#ifndef NODE_H
#define NODE_H

 /**
  * @class node
  * @brief Klasa przechowuj¹ca dane (wartoœæ typu int) oraz
  * wskaŸniki na nastêpny i poprzedni element.
  */
class node {
public:
	/**
	 * @var data
	 * @brief Wartoœæ przechowywana w wêŸle.
	 */
	int data;

	/**
	 * @var next
	 * @brief WskaŸnik na nastêpny wêze³ w strukturze.
	 */
	node* next;

	/**
	 * @var previous
	 * @brief WskaŸnik na poprzedni wêze³ w strukturze.
	 */
	node* previous;

	/**
	 * @brief Konstruktor klasy node.
	 *
	 * Inicjalizuje wêze³ podan¹ wartoœci¹. WskaŸniki 'next' i 'previous'
	 * s¹ ustawiane na nullptr.
	 *
	 * @param value Wartoœæ, która ma byæ przechowywana w wêŸle.
	 */
	node(int value);
};

#endif