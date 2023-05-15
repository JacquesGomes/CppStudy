#include <bits/stdc++.h>
#include "array.hpp"

using namespace std;

int main(){

    ListaSequencial lista(10);
    int opcao, elemento, index, size;
    while (opcao != 11){

        cout << "1 - Insert at front\n2 - Insert at the end\n3 - Insert at index\n4 - Pop front\n5 - Pop back\n6 - Pop at index\n7 - Tamanho atual da lista\n8 - Encontrar elemento\n9 - Deletar lista\n10 - Imprimir lista\n11 - Sair\n";
        cin >> opcao;

        switch(opcao){
            case 1:

                cout << endl << "Informe o número: ";
                cin >> elemento;
                lista.push_front(elemento);
                //cout << "Novo elemento no front: " <<
                break;
            case 2:
                cout << endl << "Informe o número: ";
                cin >> elemento;
                lista.push_back(elemento);
                //cout << "Novo elemento no back: " <<
                break;
            case 3:
                cout << endl << "Informe o index e o número: ";
                cin >> index >> elemento;
                lista.insert(index, elemento);
                //cout << "Novo elemento no index << index << ": " <<
                break;
            case 4:
                cout << endl << "Informe o número: ";
                cin >> elemento;
                lista.pop_front();
                //cout << "Novo elemento no index << index << ": " <<
                break;
            case 5:
                cout << endl << "Informe o número: ";
                cin >> elemento;
                lista.pop_back();
                //cout << "Novo elemento no index << index << ": " <<
                break;
            case 6:
                cout << endl << "Informe o index: ";
                cin >> index;
                lista.removeAt(index);
                //cout << "Novo elemento no index << index << ": " <<
                break;
            case 7:
                size = lista.sizeOf();
                cout << "O tamanho atual da lista é: " << size << endl;
                break;
            case 8:
                cout << endl << "Informe o elemento: ";
                cin >> elemento;
                lista.find(elemento);
                //cout << "Novo elemento no index << index << ": " <<
                break;
            case 9:
                lista.deleteList();
                break;
            case 10:
                lista.imprimirLista();
                break;
            case 11:
                cout << "Bye bye" << endl;
                break;
            default:
                cout << "Opcao invalida." << endl;
        }
}

    return 0;
}
