#ifndef LISTITERATOR_H
#define LISTITERATOR_H
#include "Node.h"

/**
 * @brief Klasa implementujaca wzorzec Iterator do poruszania sie po liscie.
 */
class ListIterator {
private:
    Node* current; ///< Wskaznik na aktualnie przegladany wezel

public:
    /**
     * @brief Konstruktor iteratora.
     * @param start Wskaznik na wezel poczatkowy (zazwyczaj glowa listy).
     */
    ListIterator(Node* start);

    /**
     * @brief Przesuwa iterator na nastepny element i go wyswietla.
     * Wymog z zadania: "Wyswietl nastepny element".
     */
    void showNext();

    /**
     * @brief Przesuwa iterator na poprzedni element i go wyswietla.
     * Wymog z zadania: "Wyswietl poprzedni element".
     */
    void showPrev();

    /**
     * @brief Wyswietla aktualny element bez przesuwania iteratora.
     */
    void showCurrent() const;

    /**
     * @brief Sprawdza, czy iterator nie wskazuje na null.
     * @return true jesli iterator jest wazny, false w przeciwnym razie.
     */
    bool isValid() const;
};

#endif