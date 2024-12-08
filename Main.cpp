#include "List.h"
#include <iostream>
using namespace std;

int main()
{
    List myList;

    myList.insert_at_head(10);
    myList.insert_at_tail(20);
    myList.insert_at_tail(30);
    myList.insert_at_head(5);

    cout << "List:" << endl;
    myList.print();

    cout << "\nSearching:" << endl;
    myList.search(20);

    cout << "\nInserting:" << endl;
    myList.insert_at_target(15, 20);
    myList.print();

    cout << "\nRemoving:" << endl;
    myList.remove(30);
    myList.print();

    cout << "\nRemoving (head):" << endl;
    myList.remove(5);
    myList.print();

    cout << "\nRemoving (tail):" << endl;
    myList.remove(10);
    myList.print();

    return 0;
}