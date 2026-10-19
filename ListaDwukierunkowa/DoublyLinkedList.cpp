#include "DoublyLinkedList.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}

void DoublyLinkedList::pushFront(int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}

void DoublyLinkedList::pushBack(int val) {
    Node* newNode = new Node(val);
    if (tail == nullptr) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}

void DoublyLinkedList::insertAt(int index, int val) {
    if (index <= 0) {
        pushFront(val);
        return;
    }
    if (index >= size) {
        pushBack(val);
        return;
    }

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    Node* newNode = new Node(val);
    newNode->prev = current->prev;
    newNode->next = current;
    current->prev->next = newNode;
    current->prev = newNode;
    size++;
}

void DoublyLinkedList::popFront() {
    if (head == nullptr) return;

    Node* temp = head;
    head = head->next;

    if (head != nullptr) {
        head->prev = nullptr;
    }
    else {
        tail = nullptr; // Lista stala sie pusta
    }

    delete temp;
    size--;
}

void DoublyLinkedList::popBack() {
    if (tail == nullptr) return;

    Node* temp = tail;
    tail = tail->prev;

    if (tail != nullptr) {
        tail->next = nullptr;
    }
    else {
        head = nullptr; // Lista stala sie pusta
    }

    delete temp;
    size--;
}

void DoublyLinkedList::removeAt(int index) {
    if (index < 0 || index >= size || head == nullptr) return;

    if (index == 0) {
        popFront();
        return;
    }
    if (index == size - 1) {
        popBack();
        return;
    }

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;

    delete current;
    size--;
}

void DoublyLinkedList::displayForward() const {
    Node* current = head;
    std::cout << "Lista (od poczatku): ";
    if (current == nullptr) {
        std::cout << "pusta";
    }
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::displayBackward() const {
    Node* current = tail;
    std::cout << "Lista (od konca): ";
    if (current == nullptr) {
        std::cout << "pusta";
    }
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::clear() {
    while (head != nullptr) {
        popFront();
    }
}

ListIterator DoublyLinkedList::getIterator() const {
    return ListIterator(head);
}