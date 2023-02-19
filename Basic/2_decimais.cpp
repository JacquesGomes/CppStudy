#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float hectares, filhos;
    float resultado;
    int hectares1, filhos1;


    cin >> filhos >> hectares;

    resultado = round((hectares/filhos) * 1000) / 1000;

    hectares1 = hectares;
    filhos1 = filhos;

    cout << "Filhos: " << resultado << endl;
    cout << "Luiz: "<< hectares1%filhos1 << endl;
}