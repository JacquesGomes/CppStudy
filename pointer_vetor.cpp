
#include <iostream>

using namespace std;

void AlterarVetor (int *vetor, int elementos){
    int i;

    for(i=0; i<elementos; i++){
        *(vetor) = *(vetor) / 2;
        vetor ++;
    }

}

int main (){

    int v[10];
    int i;
    int contador = 0;

    for (i=0; i<10; i++){
        v[i] = contador + 1;
        contador++;
    }

    int *ptr;

    ptr = v;

    for (i=0; i<10; i++){
        cout << "Vetor inicial: "<< "V[" << i << "] = " << *(ptr + i) << " " << ptr + 1 << " " << ptr + 2 << endl;        
    }

    AlterarVetor(v, 10);

    for (i=0; i<10; i++){
        cout << "Vetor final: " << "V[" << i << "] = " << *(ptr + i) << " " << ptr << endl;        
    }
}