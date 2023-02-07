#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
    string palavra;
    cin >> palavra;

    int tamanho;
    tamanho = palavra.length();

    if(tamanho == 1){
        cout << palavra;
        return 0;
    }

    int novotamanho;

    if (tamanho % 2 == 0){
        novotamanho = (tamanho/2);
    }
    else{
        novotamanho = (tamanho/2) + 1;
    }
    

    char math[novotamanho];
    int contador = 0;

    for(int i=0; i<tamanho; i=i+2){
        if(palavra[i]=='1'){
            math[contador] = '1';
            contador++;
        }
    }

    for(int i=0; i<tamanho; i=i+2){
        if(palavra[i]=='2'){
            math[contador] = '2';
            contador++;
        }
    }

    for(int i=0; i<tamanho; i=i+2){
        if(palavra[i]=='3'){
            math[contador] = '3';
            contador++;
        }
    }

    for(int i=0; i<novotamanho-1; i++){
        cout << math[i] << '+';
    }
    cout << math[novotamanho-1];
}