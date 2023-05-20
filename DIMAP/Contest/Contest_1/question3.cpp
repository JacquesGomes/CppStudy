#include <iostream>
#include <string.h>

using namespace std;

int main(){

    /*char teste;
    int contador = 0;
    int temp;*/

    string teste;
    cin >> teste;
    int x = 100;
    for(int i = 0; i < teste.length(); i++){

        x = teste[i];
        if(x < 96){
            cout << i+1;
            break;
        }
    }

    /*while (cin >> teste){
        temp = teste;
        if(temp > 65){
            cout << contador;
            break;
        }
        contador++;

    }*/
    return 0;
}