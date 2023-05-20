#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    char x;
    char y;
    char w;
    int contador = 0;

    if(n == 1){
        cout << "Yes";
        return 0;
    }

    for(int i = 0; i < n; i++){

        cin >> x;
        cin >> y;
        cin >> w;

        if(x == y){
            contador++;
        }
        if(y == w){
            contador++;
        }

        x = 'a';
        y = 'b';
        w = 'c';

    }

    if(contador < 1){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}