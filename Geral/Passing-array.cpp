#include <iostream>

using namespace std;

void printArray(int * arr, int n){

    //como argumento, int * arr ou arr[] é a mesma coisa

    //o endereço só ocupa 8bytes
    cout << "In Function" <<sizeof(arr) <<endl;

    for(int i = 0; i<n; i++){
        cout << arr[i] << endl;
    }

}

int main (){
    int arr[] = {1, 2, 3, 4, 5, 6};
    //aqui temos o array real, ocupando 24 bytes

    //já que está sendo passado por referência, se mudar algum número aqui, mudará na main, pois estão utilizando o mesmo pedaço de memória
    int n = sizeof(arr)/sizeof(int);

    cout << "In main " << sizeof(arr) <<endl;

    for(int i = 0; i<n; i++){
        cout <<arr[i]<< endl;
    }

    printArray(arr, n);

    return 0;
}