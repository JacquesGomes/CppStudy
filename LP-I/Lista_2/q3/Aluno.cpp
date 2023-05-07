#include "Aluno.hpp"

using namespace std;

Aluno::Aluno(int matricula, string nome, float nota1, float nota2, float nota3){
    this->matricula = matricula;
    this->nome = nome;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;
}

Aluno::Aluno(){
    this->matricula = 0;
    this->nome = "null";
    this->nota1 = 0;
    this->nota2 = 0;
    this->nota3 = 0;
}

int Aluno::getMatricula(){
    return this->matricula;
}

string Aluno::getNome(){
    return this->nome;
}

float Aluno::getNota1(){
    return this->nota1;
}

float Aluno::getNota2(){
    return this->nota2;
    }

float Aluno::getNota3(){
    return this->nota3;
}

void Aluno::setMatricula(int matricula){
    this->matricula = matricula;
}

void Aluno::setNome(string nome){
    this->nome = nome;
}

void Aluno::setNota1(float nota1){
    this->nota1 = nota1;
}

void Aluno::setNota2(float nota2){
    this->nota2 = nota2;
}

void Aluno::setNota3(float nota3){
    this->nota3 = nota3;
}

float Aluno::calculaMedia(){

    float media;
    float x = this->nota1 + this->nota2 + this->nota3;
    media = x / 3;

    return media;

}
