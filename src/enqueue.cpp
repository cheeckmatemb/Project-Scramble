#include "cola.h"

void enqueue(std::queue<int>& cola, int valor) {
    cola.push(valor);
    std::cout << "Elemento " << valor << " agregado a la cola.\n";
}
