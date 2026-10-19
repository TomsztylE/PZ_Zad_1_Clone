#include "ListFactory.h"

DoublyLinkedList* ListFactory::createList() {
    // Alokacja obiektu listy w pamieci sterty (heap) za pomoca operatora new
    return new DoublyLinkedList();
}