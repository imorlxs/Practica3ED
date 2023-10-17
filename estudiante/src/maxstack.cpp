/**
 * @file maxstack.cpp
 * @brief  Archivo de implementación del TDA MaxStack
 * @author
 */

#include "maxstack.h"

void MaxStack::push(int v) {
    if (elements.empty()) {
        elem a({v, v});
        elements.push(a);
        return;
    } else {
        elem curr = elements.front();
        int max = (v < curr.maximum) ? curr.maximum : v;
        elem nuevo({v, max});
        queue<elem> aux;
        aux.push(nuevo);

        while (!elements.empty()) {
            aux.push(elements.front());
            elements.pop();
        }
        elements = aux;
    }
}