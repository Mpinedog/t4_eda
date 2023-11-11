#include <iostream>
#include "../include/abb/abb.hpp"
#include "../include/abb/abbNode.hpp"
#include "../include/avl/avl.hpp"
#include "../include/avl/avlNode.hpp"
#include "../include/tree/tree.hpp"
#include "../include/tree/treeList.hpp"
#include "../include/tree/treeListNode.hpp"
#include "../include/tree/treeNode.hpp"

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
