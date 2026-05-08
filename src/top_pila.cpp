#include "pila.h"

int top_pila(const std::stack<int>& pila) {
    if (pila.empty()) {
        std::cout << "La pila esta vacia.\n";
        return -1;
    }
    return pila.top();
}
