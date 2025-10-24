#include <iostream>
#include "Factory.h" 
  

using namespace std;


int main()
{
	setlocale(LC_ALL, "Polish");

	cout << "--- Inicjalizacja listy ---" << endl;
	list* lista = Factory::createlist();

	cout << "\n--- Dodawanie elementów na początek (push_front) i na koniec (push_back) ---" << endl;
	lista->push_front(10);
	cout << "Dodano: 10 (push_front). Aktualna lista: ";
	lista->show();

	lista->push_front(20);
	cout << "Dodano: 20 (push_front). Aktualna lista: ";
	lista->show();

	lista->push_back(5);
	cout << "Dodano: 5 (push_back). Aktualna lista: ";
	lista->show();

	lista->push_back(1);
	cout << "Dodano: 1 (push_back). Aktualna lista: ";
	lista->show();

	cout << "\n--- Dodawanie elementu w środku (push_at) ---" << endl;
	lista->push_at(15, 2); // Wstawienie 15 na indeks 2 (trzecia pozycja, licząc od 0)
	cout << "Dodano: 15 na indeksie 2. Aktualna lista: ";
	lista->show();

	lista->push_at(30, 0); // Wstawienie 30 na indeks 0 (na początek)
	cout << "Dodano: 30 na indeksie 0. Aktualna lista: ";
	lista->show();

	cout << "\n--- Wyświetlenie listy w obu kierunkach ---" << endl;
	cout << "Lista (show): ";
	lista->show();
	cout << "Lista od tyłu (showReverse): ";
	lista->showReverse();
	cout << endl;

	cout << "\n--- Usuwanie elementu z końca (pop_back) ---" << endl;
	lista->pop_back();
	cout << "Usunięto element z końca (pop_back). Aktualna lista: ";
	lista->show();

	cout << "\n--- Usuwanie elementu z początku (pop_front) ---" << endl;
	lista->pop_front();
	cout << "Usunięto element z początku (pop_front). Aktualna lista: ";
	lista->show();

	cout << "\n--- Ponowne dodawanie na początek (push_front) ---" << endl;
	lista->push_front(99);
	cout << "Dodano: 99 (push_front). Aktualna lista: ";
	lista->show();
	cout << endl;

	cout << "\n--- Usuwanie elementu ze środka (pop_at) ---" << endl;
	lista->pop_at(3); // Usuń element na indeksie 3
	cout << "Usunięto element z indeksu 3 (pop_at(3)). Aktualna lista: ";
	lista->show();

	cout << "\n--- Próba usunięcia z nieistniejącego indeksu (pop_at) ---" << endl;
	lista->pop_at(10); // Próba usunięcia elementu z indeksu 10 (powinien obsłużyć błąd)
	cout << "Próba usunięcia elementu z indeksu 10. Aktualna lista: ";
	lista->show();
	cout << endl;

	cout << "\n--- Wyświetlenie sąsiadów dla elementu na indeksie 1 (show_next, show_previous) ---" << endl;
	cout << "Następny element po indeksie 1: ";
	lista->show_next(1);
	cout << "Poprzedni element przed indeksem 1: ";
	lista->show_previous(1);

	cout << "\n--- Wyświetlenie listy od tyłu po operacjach (showReverse) ---" << endl;
	cout << "Lista od tyłu (showReverse): ";
	lista->showReverse();

	cout << "\n--- Całkowite czyszczenie listy (clear) ---" << endl;
	lista->clear();
	cout << "Lista została wyczyszczona (clear)." << endl;
	cout << "Aktualna lista (show): ";
	lista->show(); // Powinno wyświetlić pustą listę lub komunikat o pustej liście

	cout << "\n--- Dodanie elementu po czyszczeniu ---" << endl;
	lista->push_front(500);
	cout << "Dodano: 500 (push_front). Aktualna lista: ";
	lista->show();

	cout << "\n--- Usuwanie listy z pamięci (delete) ---" << endl;
	delete lista; // zwolnienie pamięci
	lista = nullptr;
	cout << "Pamięć zwolniona." << endl;

	return 0;
}