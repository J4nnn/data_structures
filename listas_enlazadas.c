#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *nxt;
} Typenode, *node;

typedef struct {
    node head;
} TypeLinkedList, *LinkedList;

node createNode (int data);
LinkedList createList ();
int first (LinkedList list);
int last (LinkedList list);
void insertFront (int data,LinkedList list);
void insertLast (int data,LinkedList list);
void insert (int data, int position, LinkedList list);
int size (LinkedList list);
bool empty (LinkedList list);

int main() {
    printf("Hello World\n");
    LinkedList lista = createList();
    // int primero = first(lista);
    // printf("%d\n", primero);
    bool vacia = empty(lista);
    printf("%d\n", vacia);
    return 0;
}

node createNode(int data){
    node newNode = (node) malloc(sizeof(Typenode));
    newNode -> data = data;
    newNode -> nxt = NULL;
    return newNode;
}

LinkedList createList (){
    LinkedList newList = (LinkedList) malloc(sizeof(TypeLinkedList));
    newList -> head = NULL;
    return newList;
}

int first (LinkedList list) {
    node aux = list -> head;
    int data = aux -> data;
    return data;
}

int last (LinkedList list) {
    node aux = list -> head;
    while (aux -> nxt != NULL) {
        aux = aux -> nxt;
    }
    return aux->data;
}

void insertFront (int data,LinkedList list) {
    node newNode = createNode(data);
    newNode -> nxt = list -> head;
    list -> head = newNode;
}

void insertLast (int data,LinkedList list) {
    node newNode = createNode(data); 
    node aux = list -> head;
    
    while (aux -> nxt != NULL) {
        aux = aux -> nxt;
    }
    aux -> nxt = newNode;
}

void insert (int data, int position, LinkedList list) {
    if (position == 0) {
        insertFront(data,list);
    }
    if (position == size(list) + 1) {
        insertLast(data,list);
        
    }
    if (position > 0 && position <= size(list)) {
        node newNode = createNode(data);
        node aux = list -> head;
        
        for (int i = 0; i <= position - 2; i++){
            aux = aux -> nxt;
        }

        newNode -> nxt = aux -> nxt;
        aux -> nxt = newNode;
    }
}

int size(LinkedList list){
    int count = 0;
    node aux = list -> head;
    while (aux != NULL){
        aux = aux -> nxt;
        count++;
    }    
    return count;
}

bool empty(LinkedList list){
    bool empty = false;
    if (list -> head == NULL) {
        empty = true;
    }
    return empty;
}



