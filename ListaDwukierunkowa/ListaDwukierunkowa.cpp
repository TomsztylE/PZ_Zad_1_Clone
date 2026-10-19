#include <iostream>
#include "ListFactory.h"
#include "DoublyLinkedList.h"
#include "ListIterator.h"

using namespace std;

int main() {
    cout << "--- Inicjalizacja poprzez wzorzec Factory ---" << endl;
    DoublyLinkedList* myList = ListFactory::createList();

    cout << "\n--- TEST: Dodawanie elementow ---" << endl;
    myList->pushFront(20);   // Dodaj na poczatek
    myList->pushFront(10);   // Dodaj na poczatek
    myList->pushBack(40);    // Dodaj na koniec
    myList->pushBack(50);    // Dodaj na koniec
    myList->insertAt(2, 30); // Dodaj 30 pod indeks 2 (powinno byc miedzy 20 a 40)

    myList->displayForward();  // Wymog: Wyswietl cala liste
    myList->displayBackward(); // Wymog: Wyswietl liste w odwrotnej kolejnosci

    cout << "\n--- TEST: Wzorzec Iterator ---" << endl;
    ListIterator it = myList->getIterator();
    if (it.isValid()) {
        it.showCurrent();
        it.showNext(); // Wymog: Wyswietl nastepny element
        it.showNext();
        it.showPrev(); // Wymog: Wyswietl poprzedni element
    }

    cout << "\n--- TEST: Usuwanie elementow ---" << endl;
    cout << "Usuwam z poczatku i konca:" << endl;
    myList->popFront(); // Usuwa 10
    myList->popBack();  // Usuwa 50
    myList->displayForward();

    cout << "Usuwam z pod wskazanego indeksu (indeks 1, czyli liczba 40):" << endl;
    myList->removeAt(1);
    myList->displayForward();

    cout << "\n--- TEST: Czyszczenie listy ---" << endl;
    myList->clear(); // Wymog: Czysc cala liste
    myList->displayForward();

    // Wymog: Klasa dziala na stercie, wiec po tescie czyscimy pamiec
    delete myList;
    cout << "\nPamiec zwolniona, program zakonczony." << endl;

    return 0;
    //Test
}