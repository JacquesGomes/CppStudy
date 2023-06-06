#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    string nome;
    string linha;
    double nota1, nota2, nota3, media;
    string resultado;

    ifstream arquivo("entrada_q3.txt");
    ofstream arquivo_saida("saida_q3.txt");

    if(!arquivo){
        cerr << "Erro ao abrir o arquivo de entrada" << endl;
        return 1;
    }

    while (getline(arquivo, linha)) {
        
        stringstream ss(linha);

        ss >> nome >> nota1 >> nota2 >> nota3;

        media = (nota1 + nota2 + nota3) / 3.0;

        if(media >= 7){
            resultado = "aprovado";
        } else{
            resultado = "reprovado";
        }

        arquivo_saida << nome << "\t" << fixed << setprecision(1) << media << "\t" << resultado << endl;
        
    }



    arquivo.close();
    arquivo_saida.close();

    return 0;

}