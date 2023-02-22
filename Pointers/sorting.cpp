#include <iostream>

using namespace std;

void imprime_indireto(int **A_indireto, int n){
    for(int i=0; i<n-1; i++){
        cout << **(A_indireto+i) << " ";
    }
    cout << **(A_indireto+n-1) << endl;
}

int main(){

    int total;

    cin >> total;

    int array[total];
    int *array_ponteiros[sizeof(array)/sizeof(int)];

    for (int i=0; i<total; i++){
        cin >> array[i];
    }

    for(int i=0; i<total; i++){
        array_ponteiros[i] = &array[i];
    }

    for(int i=0; i<total-1; i++){
        for(int j=0; j<total-i-1; j++){
            if(*array_ponteiros[j]> *array_ponteiros[j+1]){
                int* temp = array_ponteiros[j];
                array_ponteiros[j] = array_ponteiros[j+1];
                array_ponteiros[j+1]=temp;

            }
        }
    }


    imprime_indireto(array_ponteiros, total);

    for (int i=0; i<total-1; i++){
        cout << array[i] << " ";
    }

    cout << array[total-1];
    

    return 0;
}