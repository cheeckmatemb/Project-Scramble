#include "cola.h"

void show_cola(std::queue<int> cola) {
    if (cola.empty()) {
        std::cout << "La cola esta vacia.\n";
        return;
    }
    std::cout << "Elementos de la cola (frente -> fondo):\n";
    while (!cola.empty()) {
        std::cout << "  " << cola.front() << "\n";
        cola.pop();
    }
}
