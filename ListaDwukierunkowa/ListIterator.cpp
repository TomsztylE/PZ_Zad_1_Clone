#include "ListIterator.h"
#include <iostream>

ListIterator::ListIterator(Node* start) {
    current = start;
}

void ListIterator::showNext() {
    if (current != nullptr && current->next != nullptr) {
        current = current->next;
        std::cout << "Nastepny element: " << current->data << std::endl;
    }
    else {
        std::cout << "Brak nastepnego elementu (koniec listy)." << std::endl;
    }
}

void ListIterator::showPrev() {
    if (current != nullptr && current->prev != nullptr) {
        current = current->prev;
        std::cout << "Poprzedni element: " << current->data << std::endl;
    }
    else {
        std::cout << "Brak poprzedniego elementu (poczatek listy)." << std::endl;
    }
}

void ListIterator::showCurrent() const {
    if (current != nullptr) {
        std::cout << "Obecny element: " << current->data << std::endl;
    }
    else {
        std::cout << "Iterator nie wskazuje na zaden element." << std::endl;
    }
}

bool ListIterator::isValid() const {
    return current != nullptr;
}