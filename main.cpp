#include <iostream>
#include "list.h"

using namespace std;

int main() {
    list l;
    for (int i = 0; i < 100000; ++i) {
        l.pushBack(1);
    }
    cout << "l is full: " << endl;
    //list l1(l);
    cout << "l1 is full: " << endl;
    //list l2(move(l)); // move семантика
    cout << "l1 is full: " << endl;

    return 0;
}
