#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "Node.h"
#include "ListIterator.h"

/**
 * @brief Klasa glownej listy dwukierunkowej dzialajacej na stercie.
 */
class DoublyLinkedList {
private:
    Node* head; ///< Poczatek listy
    Node* tail; ///< Koniec listy
    int size;   ///< Aktualny rozmiar listy

public:
    /** @brief Konstruktor bezparametrowy. */
    DoublyLinkedList();

    /** @brief Destruktor zwalniajacy pamiec (czysci liste). */
    ~DoublyLinkedList();

    /**
     * @brief Dodaje element na poczatek listy.
     * @param val Wartosc do dodania.
     */
    void pushFront(int val);

    /**
     * @brief Dodaje element na koniec listy.
     * @param val Wartosc do dodania.
     */
    void pushBack(int val);

    /**
     * @brief Dodaje element pod wskazany indeks.
     * @param index Pozycja, na ktora ma trafic element (od 0).
     * @param val Wartosc do dodania.
     */
    void insertAt(int index, int val);

    /**
     * @brief Usuwa element z poczatku listy.
     */
    void popFront();

    /**
     * @brief Usuwa element z konca listy.
     */
    void popBack();

    /**
     * @brief Usuwa element z pod wskazanego indeksu.
     * @param index Pozycja elementu do usuniecia (od 0).
     */
    void removeAt(int index);

    /**
     * @brief Wyswietla cala liste (od poczatku do konca).
     */
    void displayForward() const;

    /**
     * @brief Wyswietla liste w odwrotnej kolejnosci (od konca do poczatku).
     */
    void displayBackward() const;

    /**
     * @brief Czysci cala liste, usuwajac wszystkie elementy z pamieci.
     */
    void clear();

    /**
     * @brief Zwraca iterator ustawiony na poczatek listy.
     * @return Obiekt ListIterator.
     */
    ListIterator getIterator() const;
};

#endif