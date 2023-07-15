#include "funcionarios.hpp"
#include <bits/stdc++.h>

using namespace std;

Funcionario::Funcionario(string nome, double salario) {
    this->nome = nome;
    this->salario = salario;
}

Funcionario::Funcionario() {
    this->nome = "";
    this->salario = 0;
}

string Funcionario::getNome() {
    return nome;
}

double Funcionario::getSalario() {
    return salario;
}

void Funcionario::aumentarSalario(int percAumento) {
    salario *= (1 + (double)percAumento/100);
}

void Funcionario::imprimirDados() {
    cout << "Nome: " << nome << " ";
    cout << "Salario: " << salario << "\n";
}

bool compararSalario(Funcionario a, Funcionario b) {
    return a.getSalario() < b.getSalario();
}

Funcionario Funcionario::operator++(int) {
    Funcionario temp(*this);
    salario *= 1.1;
    return temp;
}

void imprimirMaioresSalarios(Funcionario funcionarios[], int tamanho, int tres) {
    sort(funcionarios, funcionarios + tamanho, compararSalario);
    cout << "Os 3 funcionarios com maiores salarios sao:\n";
    for (int i = tamanho - 1; i >= tamanho - tres && i >= 0; i--) {
        funcionarios[i].imprimirDados();
    }
}

void imprimirMenoresSalarios(Funcionario funcionarios[], int tamanho, int tres) {
    sort(funcionarios, funcionarios + tamanho, compararSalario);
    cout << "Os 3 funcionarios com menores salarios sao:\n";
    for (int i = 0; i < tres && i < tamanho; i++) {
        funcionarios[i].imprimirDados();
    }
}

int buscarFuncionarioPorNome(Funcionario* funcionarios, int numFuncionarios, string nome) {
    for (int i = 0; i < numFuncionarios; i++) {
        if (funcionarios[i].getNome() == nome) {
            return i;
        }
    }
    return -1;
}

void aumentarPadrao(Funcionario* funcionarios, int numFuncionarios, string nome) {
    int index = buscarFuncionarioPorNome(funcionarios, numFuncionarios, nome);
    funcionarios[index]++;
    int y = funcionarios[index].getSalario();
    cout << "Salario de " << nome << " aumentado em " << 10 << "%" << " agora é: " << y << endl;

}

void aumentarSalarioPorNome(Funcionario* funcionarios, int numFuncionarios, string nome, int perc) {
    int index = buscarFuncionarioPorNome(funcionarios, numFuncionarios, nome);
    if (index != -1) {
        funcionarios[index].aumentarSalario(perc);
        cout << "Salario de " << nome << " aumentado em " << perc << "%" << " agora é: " << funcionarios[index].getSalario() << endl;
    } else {
        cout << "Funcionario nao encontrado.\n";
    }
}

void imprimirTodosFuncionarios(Funcionario funcionarios[], int tamanho) {
    cout << "Lista dos funcionários:\n";
    for (int i = 0; i < tamanho; i++) {
        funcionarios[i].imprimirDados();
    }
}

void aumentarTodosPadrao(Funcionario funcionarios[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        funcionarios[i].aumentarSalario(10);
    }

    cout << "Novos salários com o aumento de 10" << "%" << ":\n";
    for (int i = 0; i < tamanho; i++) {
        funcionarios[i].imprimirDados();
    }
}

void aumentarTodosPerso(Funcionario funcionarios[], int tamanho, int perc) {

    for (int i = 0; i < tamanho; i++) {
        funcionarios[i].aumentarSalario(perc);
    }

    cout << "Novos salários com o aumento de " << perc << "%" << ":\n";
    for (int i = 0; i < tamanho; i++) {
        funcionarios[i].imprimirDados();
    }
}