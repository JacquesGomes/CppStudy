#include <iostream>
using namespace std;

void troca (int &a, int &b){

    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main (){

    int a, b;

    cout << "Escreva o número 'A': ";    
    cin >> a;
 
    cout << "Escreva o número 'B': ";
    cin >> b;

    troca (a,b);

    cout << "Os números trocados são: " << a <<" e " << b << "\n";

    return 0;
}