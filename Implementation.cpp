#include "List.h"
#include <iostream>
using namespace std;

void List::insert_at_head(int value)
{
    Node* temp = new Node(value);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        tail->setNext(head);
    }
    else
    {
        temp->setNext(head);
        head = temp;
        tail->setNext(head); 
    }
}

void List::insert_at_tail(int value)
{
    Node* temp = new Node(value);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        tail->setNext(head);
    }
    else
    {
        tail->setNext(temp);
        tail = temp;
        tail->setNext(head);
    }
}

void List::print()
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    do
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    } while (temp != head);
    cout << endl;
}

void List::search(int target)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node* temp = head;
    do
    {
        if (temp->getData() == target)
        {
            cout << "Found" << endl;
            return;
        }
        temp = temp->getNext();
    } while (temp != head);

    cout << "Not found" << endl;
}

void List::insert_at_target(int value, int target)
{
    if (head == NULL)
    {
        cout << "Empty!" << endl;
        return;
    }
    Node* temp = head;
    do
    {
        if (temp->getData() == target)
        {
            Node* newNode = new Node(value);
            newNode->setNext(temp->getNext());
            temp->setNext(newNode);

            if (temp == tail)
            {
                tail = newNode;
                return;
            }
        }

        temp = temp->getNext();
    } while (temp != head);
}

void List::remove(int target)
{
    if (head == NULL)
    {
        cout << "Empty!" << endl;
        return;
    }
    Node* temp = head;
    Node* previous = NULL;

    do
    {
        if (temp->getData() == target)
        {
            if (temp == head)
            {
                if (head == tail) 
                {
                    delete head;
                    head = tail = NULL;
                }
                else
                {
                    head = head->getNext();
                    tail->setNext(head);
                    delete temp;
                }
            }
            else if (temp == tail)
            {
                tail = previous;
                tail->setNext(head);
                delete temp;
            }
            else
            {
                previous->setNext(temp->getNext());
                delete temp;
            }
            return;
        }
        previous = temp;
        temp = temp->getNext();
    } while (temp != head);
}
