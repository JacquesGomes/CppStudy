#include <bits/stdc++.h>

using namespace std;

int main(){

    string entrada;
    cin >> entrada;

    int total = entrada.length();
    int contador = 0;

    char distinct[total];
    int contador2 = 0;

    char completo[total];
    int contador3 = 0;

    for(int i = 0; i < total; i++){
        for(int j = 0; j < total; j++){
            if(entrada[i] != entrada[j]){
                contador++;
            }
        }
        if (contador < total-1){
            distinct[contador2] = entrada[i];
            contador2++;
        }
        else{
            completo[contador3] = entrada[i];
            contador3++;
        }
        contador = 0;

        
    }

    int x = 0;
    if(contador2 > 0){
        completo[contador3] = distinct[0];
        contador3++;
    }
    else{
        cout << "CHAT WITH HER!";
        return 0;
    }

    for(int i = 1; i < contador2; i++){
        for(int j = 0; j < contador3; j++){
            if(distinct[i] == completo[j]){
                x = 1;       
            }
        }
        if(x == 0){
            completo[contador3] = distinct[i];
            contador3++;
        }
        x = 0;
    }

    if(contador3 % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}