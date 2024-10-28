#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "social_net.h"

typedef struct Node {
    Person data;
    struct Node* next;
} Node;

typedef Node* LinkedList;

int size_list(LinkedList l);
Person* element_at(LinkedList l, int pos);
LinkedList append(LinkedList l, Person data);

#endif LINKED_LIST_H