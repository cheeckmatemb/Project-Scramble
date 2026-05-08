#include "pila.h"

void pop_pila(std::stack<int>& pila) {
    if (pila.empty()) {
        std::cout << "La pila esta vacia. No se puede eliminar.\n";
        return;
    }
    std::cout << "Elemento " << pila.top() << " eliminado de la pila.\n";
    pila.pop();
}
