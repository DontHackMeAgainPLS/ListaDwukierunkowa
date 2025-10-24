/**
 * @file Node.h
 * @brief Definicja klasy node, reprezentuj�cej pojedynczy element
 * w strukturze danych w tym przypadku li�cie dwukierunkowej.
 */

#ifndef NODE_H
#define NODE_H

 /**
  * @class node
  * @brief Klasa przechowuj�ca dane (warto�� typu int) oraz
  * wska�niki na nast�pny i poprzedni element.
  */
class node {
public:
	/**
	 * @var data
	 * @brief Warto�� przechowywana w w�le.
	 */
	int data;

	/**
	 * @var next
	 * @brief Wska�nik na nast�pny w�ze� w strukturze.
	 */
	node* next;

	/**
	 * @var previous
	 * @brief Wska�nik na poprzedni w�ze� w strukturze.
	 */
	node* previous;

	/**
	 * @brief Konstruktor klasy node.
	 *
	 * Inicjalizuje w�ze� podan� warto�ci�. Wska�niki 'next' i 'previous'
	 * s� ustawiane na nullptr.
	 *
	 * @param value Warto��, kt�ra ma by� przechowywana w w�le.
	 */
	node(int value);
};

#endif