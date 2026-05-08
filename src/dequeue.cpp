#include "cola.h"

void dequeue(std::queue<int>& cola) {
    if (cola.empty()) {
        std::cout << "La cola esta vacia. No se puede eliminar.\n";
        return;
    }
    std::cout << "Elemento " << cola.front() << " eliminado de la cola.\n";
    cola.pop();
}
