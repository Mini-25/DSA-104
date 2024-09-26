#ifndef ADT_H
#define ADT_H

struct Node {
    int val;
    Node* next;
};

class ADT {
public:
    virtual void insert(int val) = 0;
    virtual void remove() = 0;
    virtual void print() const = 0;
};

#endif 
