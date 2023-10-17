/**
 * @file maxqueue.cpp
 * @brief  Archivo de implementación del TDA MaxQueue
 * @author
 */

#include "maxqueue.h"

void MaxQueue::push(int e) {
    elem a({e, e});

    if (elements.empty()) {
        elements.push(a);
        return;
    }
    else {
        stack<elem> aux;
        while (!elements.empty()){
            aux.push(elements.top());
            elements.pop();
        }
        elements.push(a);
        while(!aux.empty()){
            elem curr = aux.top();
            if (curr.maximum< e)
                curr.maximum=e;
            elements.push(curr);
            aux.pop();
        }



    }
}