#include "pila.h"

void show_pila(std::stack<int> pila) {
    if (pila.empty()) {
        std::cout << "La pila esta vacia.\n";
        return;
    }
    std::cout << "Elementos de la pila (tope -> fondo):\n";
    while (!pila.empty()) {
        std::cout << "  " << pila.top() << "\n";
        pila.pop();
    }
}
