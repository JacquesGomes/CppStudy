#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario{
    private:
        string nome;
        double salario;

    public:
        Funcionario(string nome, double salario);
        Funcionario();
        string getNome();
        double getSalario();
        void aumentarSalario(int percAumento);
        Funcionario operator++(int);
        void imprimirDados();
        
};

void imprimirMaioresSalarios(Funcionario funcionarios[], int tamanho, int tres);
void imprimirMenoresSalarios(Funcionario funcionarios[], int tamanho, int tres);
int buscarFuncionarioPorNome(Funcionario* funcionarios, int numFuncionarios, string nome);
void aumentarSalarioPorNome(Funcionario* funcionarios, int numFuncionarios, string nome, int perc);
void aumentarPadrao(Funcionario* funcionarios, int numFuncionarios, string nome);
void imprimirTodosFuncionarios(Funcionario funcionarios[], int tamanho);
void aumentarTodosPadrao(Funcionario* funcionarios, int tamanho);
void aumentarTodosPerso(Funcionario* funcionarios, int tamanho, int perc);

#endif // !
