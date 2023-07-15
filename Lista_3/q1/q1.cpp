#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<string> nomes(4);
    ifstream arquivo("entrada_q1.txt");

    if(!arquivo){
        cerr << "Erro ao abrir o arquivo de entrada" << endl;
        return 1;
    }

    for(int i=0; i<4; i++){
        getline(arquivo, nomes[i]);
    }

    for(const auto& string : nomes){
        cout << string << endl;
    }

    arquivo.close();

    return 0;

}