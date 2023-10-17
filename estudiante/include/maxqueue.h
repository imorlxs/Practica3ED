/**
 * @file maxqueue.h
 * @brief  Archivo de especificación del TDA MaxQueue
 * @author
 */


#ifndef MAXQUEUE_H
#define MAXQUEUE_H

#include <stack>
#include <iostream>

using namespace std;

struct elem {
    int value;
    int maximum;

    friend ostream &operator<<(ostream &os, const elem &e) {
        os << e.value << " " << e.maximum << endl;
        return os;
    }
};

class MaxQueue {
private:
    stack<elem> elements;
public:
    MaxQueue() : elements() {}

    bool empty() const { return elements.empty(); }

    int size() const { return elements.size(); }

    elem &front() { return elements.top(); }

    void pop() { elements.pop(); }

    void push(int v);
};

#endif