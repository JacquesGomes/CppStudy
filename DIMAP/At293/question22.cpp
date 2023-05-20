#include <iostream>

using namespace std;

int main (){

    int tamanho;

    cin >> tamanho;

    int arr[tamanho];
    int called[tamanho];
    int notcalled[tamanho];

    int contador = 0;
    int boolint = 0;

    for(int i=0; i<tamanho; i++){
        cin >> arr[i];

        if(arr[i] == i+1){
            called[contador]=arr[i];
            contador++;
        }

        for(int j=0; j<contador; j++){
            if(i+1 == called[j]){
                boolint = 1;
            }

        }
        
        if(boolint == 0 && arr[i] != i+1){
            called[contador] = arr[i];
            contador++;
        }

        boolint = 0;
    }


    int contador2=0;
    int contador3=0;

    for(int i=0; i<tamanho; i++){
        for(int j=0; j<contador; j++){
            if(i+1 != called[j]){
                contador2++;
            }
        }
        if(contador2 >= contador){
            notcalled[contador3] = i+1;
            contador3++;
        }

        contador2 = 0;
    }

    for(int i = 0; i < contador3; i++){
        for(int j = 0; j < contador3-i-1; j++){
            if(notcalled[j] > notcalled[j+1]){
                int temp = notcalled[j];
                notcalled[j] = notcalled[j+1];
                notcalled[j+1] = temp;
            }
        }
        
    }

    cout << contador3 << endl;
    for(int i = 0; i < contador3-1; i++){
        cout << notcalled[i] << " ";
    }

    cout << notcalled[contador3-1];


    
    return 0;
}