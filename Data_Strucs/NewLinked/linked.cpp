#include "linked.hpp"
using namespace std;

ListaEncadeada::ListaEncadeada(Node* head){
    this->head = head;
    this->tail = head;
}

ListaEncadeada::ListaEncadeada(){
    this->head = NULL;
    this->tail = NULL;
}