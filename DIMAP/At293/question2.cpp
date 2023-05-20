#include <iostream>

using namespace std;

int main (){

    int tamanho;

    cin >> tamanho;

    int arr[tamanho];
    int called[tamanho];
    int notcalled[tamanho];
    int boolint = 0;
    int contador =0;

    for(int i=0; i<tamanho; i++){
        cin >> arr[i];
    }

    for(int i=0; i<tamanho; i++){
        
        if(arr[i] == i){
            called[contador] = arr[i];
            contador++;
            continue;
        }
        


        for(int j=0; j<tamanho; j++){
            if(arr[i]==called[j]){
                boolint = 1;
                break;
            }
            
        }

        if(boolint == 0){
            called[contador] = arr[i];
            contador++;
        }

        boolint = 0;
    }

    int contador2 = 0;

    for(int i = 0; i< tamanho; i++){
        for(int j =0 ; j<contador; j++){
            if(arr[i] != called[j]){
                contador2++;
            }
        }
        
        if(contador2 >= contador){
            cout << arr[i];
        }
        contador2 = 0;
    }

    return 0;
}