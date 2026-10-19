#ifndef NODE_H
#define NODE_H

/**
 * @brief Klasa reprezentujaca pojedynczy wezel listy dwukierunkowej.
 */
class Node {
public:
    int data;     ///< Wartosc liczbowa przechowywana w wezle
    Node* prev;   ///< Wskaznik na poprzedni wezel w liscie
    Node* next;   ///< Wskaznik na nastepny wezel w liscie

    /**
     * @brief Konstruktor inicjalizujacy wezel.
     * @param val Wartosc, ktora zostanie przypisana do wezla.
     */
    Node(int val);
};

#endif