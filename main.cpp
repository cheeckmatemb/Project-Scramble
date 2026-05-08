#include <iostream>
#include <stack>
#include <queue>
#include "pila.h"
#include "cola.h"

void menuPila(std::stack<int>& pila);
void menuCola(std::queue<int>& cola);

int main() {
    std::stack<int> pila;
    std::queue<int> cola;
    int opcion;

    do {
        std::cout << "\n===== MENU PRINCIPAL =====\n";
        std::cout << "1. Operaciones con Pila\n";
        std::cout << "2. Operaciones con Cola\n";
        std::cout << "0. Salir\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: menuPila(pila); break;
            case 2: menuCola(cola); break;
            case 0: std::cout << "Saliendo...\n"; break;
            default: std::cout << "Opcion invalida.\n";
        }
    } while (opcion != 0);

    return 0;
}

void menuPila(std::stack<int>& pila) {
    int opcion, valor;

    do {
        std::cout << "\n===== MENU PILA =====\n";
        std::cout << "1. Push  (agregar elemento)\n";
        std::cout << "2. Pop   (eliminar tope)\n";
        std::cout << "3. Top   (ver tope)\n";
        std::cout << "4. Size  (tamano)\n";
        std::cout << "5. Empty (verificar si esta vacia)\n";
        std::cout << "6. Show  (mostrar pila)\n";
        std::cout << "0. Volver al menu principal\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese valor a agregar: ";
                std::cin >> valor;
                push_pila(pila, valor);
                break;
            case 2:
                pop_pila(pila);
                break;
            case 3:
                if (!empty_pila(pila))
                    std::cout << "Tope de la pila: " << top_pila(pila) << "\n";
                break;
            case 4:
                std::cout << "Tamano de la pila: " << size_pila(pila) << "\n";
                break;
            case 5:
                std::cout << "La pila " << (empty_pila(pila) ? "esta vacia." : "no esta vacia.") << "\n";
                break;
            case 6:
                show_pila(pila);
                break;
            case 0:
                break;
            default:
                std::cout << "Opcion invalida.\n";
        }
    } while (opcion != 0);
}

void menuCola(std::queue<int>& cola) {
    int opcion, valor;

    do {
        std::cout << "\n===== MENU COLA =====\n";
        std::cout << "1. Enqueue (agregar elemento)\n";
        std::cout << "2. Dequeue (eliminar frente)\n";
        std::cout << "3. Front   (ver frente)\n";
        std::cout << "4. Size    (tamano)\n";
        std::cout << "5. Empty   (verificar si esta vacia)\n";
        std::cout << "6. Show    (mostrar cola)\n";
        std::cout << "0. Volver al menu principal\n";
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese valor a agregar: ";
                std::cin >> valor;
                enqueue(cola, valor);
                break;
            case 2:
                dequeue(cola);
                break;
            case 3:
                if (!empty_cola(cola))
                    std::cout << "Frente de la cola: " << front_cola(cola) << "\n";
                break;
            case 4:
                std::cout << "Tamano de la cola: " << size_cola(cola) << "\n";
                break;
            case 5:
                std::cout << "La cola " << (empty_cola(cola) ? "esta vacia." : "no esta vacia.") << "\n";
                break;
            case 6:
                show_cola(cola);
                break;
            case 0:
                break;
            default:
                std::cout << "Opcion invalida.\n";
        }
    } while (opcion != 0);
}
