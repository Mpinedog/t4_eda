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
#include <cstdlib>
#include <vector>

int main() {

    std::srand(time(nullptr));
    int n = pow(10,3); // Cambia este valor al número deseado de claves
    std::cout<<"Tamaño: "<<n<<std::endl;

    //generar n numeros 
    std::vector<int> vector;
    for(int i = 0; i < n; ++i ){
        int numero_aleatorio =std::rand();
        vector.push_back(numero_aleatorio);
    }
    
    /*
    //ABB
    // Insertar n claves en el árbol
    trees::ABB arbol;
    clock_t start_insr_abb = clock();
    for (int i =0; i < vector.size();++i) {
        arbol.insert(vector[i]);
    }
    clock_t end_insr_abb = clock();
    double insercion_time_ABB = static_cast<double>(end_insr_abb - start_insr_abb)/CLOCKS_PER_SEC;
    std::cout<<"tiempo de insercion: "<<insercion_time_ABB<<std::endl;
    
    //Mostrar el árbol en orden ascendente
    //std::cout << "Árbol en orden ascendente: ";
    //arbol.showASC();
    

   //busqueda de n claves en el arbol
    clock_t start_srch_abb = clock();
    for(int i = 0; i < vector.size(); ++i){
        arbol.find(vector[i]);
    }
    clock_t end_srch_abb = clock();
    double search_time_ABB = static_cast<double>(end_srch_abb- start_srch_abb)/CLOCKS_PER_SEC;
    std::cout<<"tiempo de busqueda "<<search_time_ABB<<std::endl;
    */

    
    //AVL
    //insertar n claves en arbol
    trees::AVL avl;
    clock_t start_insr_avl = clock();
    for (int i = 1; i <= vector.size(); ++i) {
        avl.insert(vector[i]);
    }
    clock_t end_insr_avl = clock();
    double insercion_time_AVL = static_cast<double>(end_insr_avl - start_insr_avl)/CLOCKS_PER_SEC;
    std::cout<<"tiempo de insercion: "<<insercion_time_AVL<<std::endl;

    //buscar n claves en arbol
    clock_t start_srch_avl = clock();
    for(int i = 0; i < vector.size(); ++i){
        avl.find(vector[i]);
    }
    clock_t end_srch_avl = clock();
    double search_time_AVL = static_cast<double>(end_srch_avl- start_srch_avl)/CLOCKS_PER_SEC;
    std::cout<<"tiempo de busqueda: "<<search_time_AVL<<std::endl;
    

    return 0;
}
