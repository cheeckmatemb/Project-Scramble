#include "pila.h"

void push_pila(std::stack<int>& pila, int valor) {
    pila.push(valor);
    std::cout << "Elemento " << valor << " agregado a la pila.\n";
}
