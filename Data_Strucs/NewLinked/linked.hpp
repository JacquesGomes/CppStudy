#ifndef LINKED_HPP
#define LINKED_HPP

#include <bits/stdc++.h>
using namespace std;

class Node{
    private: 
        int elemento;
        Node* next;
    
    public:

        //constructor
        Node (int element){
            this->elemento = element;
            this->next = NULL;
        }

        //methods:

        int getElement(){
            return elemento;
        }

        Node* getNext(){
            return next;
            }
        
        void setNext(Node* p){
            next = p;
        }

};

class ListaEncadeada {
    private:
        Node* head;
        Node* tail;
    
    public:
        ListaEncadeada ();
        ListaEncadeada (Node* head);
        ~ListaEncadeada();
        int push_front(int valor);
        int push_back(int valor);
        void pop_front();
        void pop_back();
        void printAll();
        void remove(int valor);
        void sizeOf();
        int find(int valor);
        void deleteAll();

};

#endif