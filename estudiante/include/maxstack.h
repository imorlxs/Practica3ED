/**
 * @file maxstack.h
 * @brief  Archivo de especificación del TDA MaxStack
 * @author
 */
#ifndef MAXSTACK_H
#define MAXSTACK_H

#include <queue>
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

class MaxStack {
private:
    queue<elem> elements;

public:
    MaxStack() : elements() {}

    elem &top() { return elements.front(); }

    bool empty() const {
        return elements.empty();
    }

    void pop() {
        elements.pop();
    }

    int size() const {
        return elements.size();
    }

    void push(int v);
};

#endif