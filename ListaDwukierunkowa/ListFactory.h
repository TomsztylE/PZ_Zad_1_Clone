#ifndef LISTFACTORY_H
#define LISTFACTORY_H
#include "DoublyLinkedList.h"

/**
 * @brief Klasa implementujaca wzorzec Factory (Fabryka).
 */
class ListFactory {
public:
    /**
     * @brief Tworzy nowa instancje listy dwukierunkowej na stercie.
     * @return Wskaznik na zaalokowana liste.
     */
    static DoublyLinkedList* createList();
};

#endif