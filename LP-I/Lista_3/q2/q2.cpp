#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> numeros;
    ifstream arquivo("entrada_q2.txt");
    ofstream arquivo_saida("saida_q2.txt");

    if(!arquivo){
        cerr << "Erro ao abrir o arquivo de entrada" << endl;
        return 1;
    }

    int numero;

    while (arquivo >> numero) {
        numeros.push_back(numero);
    }

    sort(numeros.begin(), numeros.end());

    int menor = numeros.front();
    int maior = numeros.back();

    double soma = 0;
    for (int num : numeros) {
        soma += num;
    }
    double media = soma / numeros.size();

    arquivo_saida << "menor elemento: " << menor << endl;
    arquivo_saida << "maior elemento: " << maior << endl;
    arquivo_saida << "media dos elementos: " << media << endl;    


    arquivo.close();
    arquivo_saida.close();

    return 0;

}