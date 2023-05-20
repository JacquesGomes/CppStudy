#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >> n;
    char s[n];
    int barra[3];
    int contador = 0;
    int ponto;

    for (int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == '|'){
            barra[contador] = i;
            contador++;
        }
        else if(s[i] == '*'){
            ponto = i;
        }
    }

    if(ponto > barra[0] && ponto < barra[1]){
        cout << "in";
    }
    else{
        cout << "out";
    }

    return 0;
}