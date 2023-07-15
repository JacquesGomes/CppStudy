#include <bits/stdc++.h>
#include "Aluno.hpp"
#include "Turma.hpp"

int main (){

    /*Aluno a1(2023, "Jacques", 5, 5.2, 5.5);

    Turma turma(10);

    turma.adicionarAluno(a1);

    turma.imprimirAlunos();

    float x = a1.calculaMedia();

    printf("%.2f\n", x);*/

    Turma turma(10);

    int opcao = 0;

    string nome;
    int temp;
    float x, y, z;
    Aluno tempo(temp, nome, x, y, z);

    while (opcao != 4){
        cout << "1 - Adicionar aluno\n2 - Ordenar alunos\n3 - Listar alunos\n4 - Sair\n";
        cin >> opcao;
        switch(opcao){
            case 1:

                cout << endl << "Informe o nome do aluno: ";

                cin >> nome;

                cout << endl <<"Informe a matrícula do aluno: ";

                cin >> temp;

                cout << endl << "Informe as notas do aluno: ";

                cin >> x >> y >> z;

                tempo.setNome(nome);
                tempo.setMatricula(temp);
                tempo.setNota1(x);
                tempo.setNota2(y);
                tempo.setNota3(z);


                turma.adicionarAluno(tempo);

                break;
            case 2:
                int preferencia;
                cout << "1 - Ordenar por matricula\n2 - Ordenar por nome\n3 - Ordenar por media\n";
                cin >> preferencia;
                turma.ordenar(preferencia);
                break;
            case 3:
                turma.imprimirAlunos();
                break;
            case 4:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida." << endl;
        }
    }
    return 0;
}