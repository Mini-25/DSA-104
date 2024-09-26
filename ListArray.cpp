#include "ListArray.h"

int main() {
    ListArray myList;

    myList.insert(10);
    myList.insert(20);
    myList.insert(30);
    myList.print();
    //List: 10 20 30

    myList.remove();
    myList.print();
    //List: 10 20

    myList.insert(40);
    myList.insert(50);
    myList.print();
    //List: 10 20 40 50

    return 0;
}
