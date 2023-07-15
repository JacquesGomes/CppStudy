#include "Turma.hpp"
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void Turma::adicionarAluno(Aluno aluno){
    
    if(this->vagas - 1 < 0){
        cout << "Acabaram as vagas" << endl;
        
    }
    else{
        this->alunos.push_back(aluno);
        this->vagas--;
    }
}

Turma::Turma(int capacidade){
    this->capacidade = capacidade;
    this->vagas = capacidade;
}

Turma::Turma(){
    this->capacidade = 0;
    this->vagas = 0;
}

Turma::~Turma(){
    alunos.clear();
}

int Turma::getCapacidade(){
    return this->capacidade;
    }

int Turma::getVagas(){
    return this->vagas;
}

//Acrescentar checagem se na modificação não irá conflitar com as vagas/capacidade existente

void Turma::setCapacidade(int capacidade){

    if(capacidade < this->capacidade){
        cout << "É preciso reduzir o número de alunos antes de reduzir a capacidade! O número de capacidade desejado é menor que o número atual de alunos" << endl;
    }

    else{

        int temp = this->capacidade;
        this->capacidade = capacidade;
        this->vagas = capacidade - (temp - this->vagas);

    }
}

vector<Aluno> Turma::getAlunos(){
    return this->alunos;
}

void Turma::imprimirAlunos(){
    for(auto aluno : this->alunos){
        cout << aluno.getNome() << " - " << aluno.getMatricula() << " - " << aluno.getNota1() << " - " << aluno.getNota2() << " - " << aluno.getNota3() << endl;
    }
}

void Turma::ordenar(int preferencia){
    switch(preferencia){
        case 1: // ordernar por matricula
            sort(alunos.begin(), alunos.end(), [](Aluno& a, Aluno& b) {return a.getMatricula() < b.getMatricula(); });
            break;
        case 2: // ordernar por nome
            sort(alunos.begin(), alunos.end(), [](Aluno& a, Aluno& b) {return a.getNome() < b.getNome(); });
            break;
        case 3: // ordernar por media
            sort(alunos.begin(), alunos.end(), [](Aluno& a, Aluno& b) {return a.calculaMedia() < b.calculaMedia(); });
            break;
        default:
            cout << "Opcao invalida." << endl;
            return;
    }
    for(auto aluno : this->alunos){
        cout << aluno.getNome() << " - " << aluno.getMatricula() << " - " << aluno.getNota1() << " - " << aluno.getNota2() << " - " << aluno.getNota3() << endl;
    }
}
