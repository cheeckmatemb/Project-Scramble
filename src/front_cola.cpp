#include "cola.h"

int front_cola(const std::queue<int>& cola) {
    if (cola.empty()) {
        std::cout << "La cola esta vacia.\n";
        return -1;
    }
    return cola.front();
}
