#include <iostream>

using namespace std;

int main (){

    int vetor [10] = {0};

    int *ptr;

    ptr = vetor;// é a mesma coisa que:

    cout << ptr << endl;

    ptr = &vetor[0]; // isso

    //O endereço é o do primeiro byte

    cout << ptr << endl;
}