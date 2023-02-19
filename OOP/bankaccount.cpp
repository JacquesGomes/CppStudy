#include <iostream>
#include "Client.h"
using namespace std;

Client::Client(){
    cash = 0;
    menu ();
}

void Client::menu(){
    int op=0;
    do{
        cout <<"0. Sair"<<endl;
        cout <<"1. Checar Saldo"<<endl;
        cout <<"2. Depositar dinheiro"<<endl;
        cout <<"3. Sacar dinheiro"<<endl;
        cin >> op;

        action (op);

    } while(op);
}

void Client::action(int op){
    switch(op){

        case 0:
            cout <<"Bye bye."<<endl;
            break;

        case 1:
            checkBalance();
            break;

        case 2:
            depositCash();
            break;

        case 3:
            withdraw();
            break;

        default:
            cout << "Opção inválida." << endl;
    }
}

void Client::checkBalance(){
    cout << "\nSeu saldo atual é: R$" << cash << "\n" << endl;
}
void Client::depositCash(){
    double val;

    cout <<"Valor que deseja depositar: ";
    cin >> val;

    if(val >0){
        cash += val;
        checkBalance();
    }

    else{
        cout << "Valor inválido! Tente novamente" << endl;
    }

}

void Client::withdraw(){
    double val;

    cout << "Valor que deseja sacar: ";
    cin >> val;

    if (val <=cash){
        cash -= val;
        checkBalance();
    }

    else{
        cout <<"Saldo insuficiente"<<endl;
    }
}

int main(){
    Client c;
    return 0;
}