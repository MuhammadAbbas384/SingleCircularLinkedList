
#pragma once
#include "Node.h"

class List {
private:
    Node* head;
    Node* tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void insert_at_head(int value);
    void insert_at_tail(int value);
    void print();
    void search(int target);
    void insert_at_target(int value, int target);
    void remove(int target);
};
