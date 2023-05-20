#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int s = 8;
    char chess[s][s];
    int x, y;

    for(int i = 0; i < s; i++){
        for(int j = 0; j < s; j++){
            cin >> chess[i][j];
            if(chess[i][j] == '*'){
                x = i;
                y = j;
                goto stop;
            }
        }
    }

    stop:
    switch(x){
        case 0:
            x = 8;
            break;
        case 1:
            x = 7;
            break;
        case 2:
            x = 6;
            break;
       case 3:
            x = 5;
            break;
        case 4:
            x = 4;
            break;
        case 5:
            x = 3;
            break;
        case 6:
            x = 2;
            break;
        case 7:
            x = 1;
            break;
    }

    char temp = 'a';
    int temp_int = temp;
    temp_int += y;
    char definitivo = temp_int;
    cout << definitivo << x;
    return 0;
}