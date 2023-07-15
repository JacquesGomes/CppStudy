#include "funcionarios.hpp"
#include <bits/stdc++.h>

int main() {
    int numFuncionarios = 0;
    Funcionario* funcionarios = new Funcionario[1];
    string nome;
    double salario;
    cout << "Digite o nome e salario de cada funcionario. Digite '0' para finalizar.\n";

    while (true) {
    cout << "Funcionario " << numFuncionarios+1 << ":\n";
    cout << "Nome: ";
    cin >> nome;
    if (nome == "0") {
        break;
    }
    cout << "Salario: ";
    cin >> salario;
    Funcionario f(nome, salario);
    if (numFuncionarios > 0) {
        Funcionario* temp = new Funcionario[numFuncionarios + 1];
        for (int i = 0; i < numFuncionarios; i++) {
            temp[i] = funcionarios[i];
        }
        temp[numFuncionarios] = f;
        delete[] funcionarios;
        funcionarios = temp;
    } else {
        funcionarios[0] = f;
    }
    numFuncionarios++;
    }

    while(true){
    int opcao;
    cout << endl;
    cout << "Selecione uma opcao:\n";
    cout << "1 - Listar funcionarios com maiores salarios\n";
    cout << "2 - Listar funcionarios com menores salarios\n";
    cout << "3 - Aumentar salario em porcentagem personalizada\n";
    cout << "4 - Aumentar salario em 10%\n";
    cout << "5 - Imprimir dados de um usuário pelo nome\n";
    cout << "6 - Imprimir dados de um usuário pelo id\n";
    cout << "7 - Imprimir os dados de todos os funcionários\n";
    cout << "8 - Aumentar o salário de todos os funcionários em 10%\n";
    cout << "9 - Aumentar o salário de todos os funcionários em porcentagem personalizada\n";
    cout << "10 - Sair\n";
    cin >> opcao;

    if(opcao == 10){
        break;
    }

    switch (opcao) {
    case 1:
        imprimirMaioresSalarios(funcionarios, numFuncionarios, 3);
        break;
    case 2:
        imprimirMenoresSalarios(funcionarios, numFuncionarios, 3);
        break;
    case 3:
        cout << "Informe o nome do funcionario: ";
        cin >> nome;
        int perc;
        cout << "Informe a porcentagem de aumento desejada: ";
        cin >> perc;
        aumentarSalarioPorNome(funcionarios, numFuncionarios, nome, perc);
        break;

    case 4:
        cout << "Informe o nome do funcionario: ";
        cin >> nome;
        aumentarPadrao(funcionarios, numFuncionarios, nome);
        break;
    case 5:
        int num;
        cout << "Informe o nome do funcionario: ";
        cin >> nome;
        num = buscarFuncionarioPorNome(funcionarios, numFuncionarios, nome);

        funcionarios[num].imprimirDados();
        break;

    case 6:
        int id;
        cout << "Informe o id do funcionario: ";
        cin >> id;
        funcionarios[id].imprimirDados();
        break;

    case 7:
        imprimirTodosFuncionarios(funcionarios, numFuncionarios);
        break;

    case 8:
        aumentarTodosPadrao(funcionarios, numFuncionarios);
        break;

    case 9:
        int perc2;
        cin >> perc2;
        aumentarTodosPerso(funcionarios, numFuncionarios, perc2);
        break;
    default:
        cout << "Opcao invalida\n";
        break;
    }

    }

    return 0;
    }
