//
// Created by lyudv on 21.07.2024.
//

#include "DataStructers.h"
#include "../Route.h"
#include <iostream>

template <typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* nextNode = current->next;
        delete current->data;
        delete current;
        current = nextNode;
    }
}


template <typename T>
void LinkedList<T>::add(T* data) {
    Node<T>* newNode = new Node<T>(data);
    newNode->next = head;
    head = newNode;
}


template <typename T>
void LinkedList<T>::print() const {
    Node<T>* current = head;
    while (current != nullptr) {
        std::cout << *current->data << std::endl;
        current = current->next;
    }
}

template class LinkedList<Route>;
template class LinkedList<Client>;