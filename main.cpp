#include <iostream>
#include "abb.hpp"
#include "abbNode.hpp"
#include "tree.hpp"
#include "treeList.hpp"
#include "treeListNode.hpp"
#include "treeNode.hpp"

int main() {
    int n = 10; // Cambia este valor al número deseado de claves
    
    trees::ABB arbol;

    // Insertar n claves en el árbol
    for (int i = 1; i <= n; ++i) {
        arbol.insert(i);
    }

    // Mostrar el árbol en orden ascendente
    std::cout << "Árbol en orden ascendente: ";
    arbol.showASC();

    // Realizar alguna operación adicional según sea necesario

    return 0;
}
