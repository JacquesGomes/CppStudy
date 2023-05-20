
#include <iostream>
#include <string.h>

using namespace std;

int main(){

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
    return 0;
}