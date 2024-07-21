//
// Created by Thomas on 21.07.2024.
//

#ifndef AIRPLANESYSTEM_DATASTRUCTERS_H
#define AIRPLANESYSTEM_DATASTRUCTERS_H
#include "../Route.h"
#include "../Client.h"

template <typename T>
struct Node {
    T* data;
    Node* next;

    Node(T* d) : data(d), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
public:
    LinkedList() : head(nullptr) {}
    ~LinkedList();

    void add(T* data);
    void print() const;
};

#endif //AIRPLANESYSTEM_DATASTRUCTERS_H
