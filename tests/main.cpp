#include <iostream>
#include "../include/abb/abb.hpp"
#include "../include/abb/abbNode.hpp"
#include "../include/avl/avl.hpp"
#include "../include/avl/avlNode.hpp"
#include "../include/tree/tree.hpp"
#include "../include/tree/treeList.hpp"
#include "../include/tree/treeListNode.hpp"
#include "../include/tree/treeNode.hpp"
#include <cmath>
#include<cstdlib>

int main() {

    std::srand(time(nullptr));
    int n = pow(10,6); // Cambia este valor al número deseado de claves
    std::cout<<n<<std::endl;

    //ABB
    /*
    //clock_t start = clock();
    trees::ABB arbol;
    // Insertar n claves en el árbol
    for (int i = 1; i <= n; ++i) {
        int numero_aleatorio = std::rand();
        arbol.insert(numero_aleatorio);
    }

    clock_t end = clock();
    double insercion_time = static_cast<double>(end-start)/CLOCKS_PER_SEC;
    std::cout<<"tiempo de insercion: "<<insercion_time<<std::endl;
    
    // Mostrar el árbol en orden ascendente
    std::cout << "Árbol en orden ascendente: ";
    arbol.showASC();
    */


    //AVL
    /*
    trees::AVL avl;
    clock_t start = clock();
    for (int i = 1; i <= n; ++i) {
        int numero_aleatorio = std::rand();
        avl.insert(numero_aleatorio);
    }
    clock_t end = clock();
    double insercion_time = static_cast<double>(end-start)/CLOCKS_PER_SEC;
    std::cout<<"tiempo de insercion: "<<insercion_time<<std::endl;
    */

    return 0;
}
