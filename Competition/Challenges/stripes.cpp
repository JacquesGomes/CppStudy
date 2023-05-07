#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;

//codeforce question
// entrada é um int, um espaço, uma matriz 8x8 com 'R' ou 'B'
 
int main (){
    int n, contador = 0;
    cin >> n;
    char Caras[8][8];
 
    while(n--){
        string str="";
        getline(cin, str);

        
        for (int k = 0; k<8; k++){
            for (int j = 0; j < 8; j++){
                cin >> Caras[k][j];
            }
        }

        int MaxR = 0;
        int MaxB = 0;
 
        for (int k = 0; k<8; k++){
            int c = 0;
            for (int j = 0; j < 8; j++){
                if (Caras[k][j] == 'R'){
                    c++;
                }

            }
            MaxR = max(MaxR, c);
        }
 
        for (int j = 0; j<8; j++){
            int a = 0;
            for (int k = 0; k < 8; k++){
                if (Caras[k][j] == 'B'){
                    a++;
                }
            }
            MaxB = max(MaxB, a);

        }
        if (MaxB > MaxR){
            cout << "B\n";
        }
        else{
            cout <<"R\n";
        }
    }
}