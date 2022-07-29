#include <iostream>

int vector[10] = {0,1,2,3,4,5,6,7};
linked_list create_list () {    linked_list create_list () {
        linked_list lista = (linked_list) malloc (sizeof (linked_list));
        lista -> head = NULL;
        return lista;
    }

    typedef struct {
        node head; 
        
    } type_linked_list, *linked_list;
    
    node create_node (int data) {
        node nuevo = (node) malloc(sizeof(typeNode));
        nuevo -> dato = data;
        nuevo -> nxt = NULL;
        return nuevo;
    }
    linked_list lista = (linked_list) malloc (sizeof (linked_list));
    lista -> head = NULL;
    return lista;
}
typedef struct {
    node head;
} type_linked_list, *linked_list;

node create_node (int data) {
    node nuevo = (node) malloc(sizeof(typeNode));
    nuevo -> dato = data;
    nuevo -> nxt = NULL;
    return nuevo;
}



int main(int argc, char const *argv[]) {

    return 0;
}
