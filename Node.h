#pragma once
#pragma once
#include <iostream>
using namespace std;

class Node {
private:
    int data;
    Node* next;

public:
    Node(int value)
    {
        data = value;
        next = NULL;
    }
    int getData()
    {
        return data;
    }
    Node* getNext()
    {
        return next;
    }
    void setNext(Node* nextNode)
    {
        next = nextNode;
    }
};