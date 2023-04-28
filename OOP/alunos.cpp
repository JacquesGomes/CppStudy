#include <bits/stdc++.h>

using namespace std;

class Aluno{
    private:

        int matricula;
        string nome;
        float nota1;
        float nota2;
        float nota3;

    public:

        Aluno(int mat, string n, float n1, float n2, float n3){

            this->matricula = mat;
            this->nome = n;
            this->nota1 = n1;
            this->nota2 = n2;
            this->nota3 = n3;

        }

        int getMatricula(){
            return matricula;
        }

        string getNome(){
            return nome;
        }

        float getNota1(){
            return nota1;
            }

        float getNota2(){
            return nota2;
            }

        float getNota3(){
            return nota3;
            }
        
        void setMatricula(int m){
            matricula = m;
        }

        void setNome(string n){
            nome = n;
        }

        void setNota1(float n1){
            nota1 = n1;
        }

        void setNota2(float n2){
            nota2 = n2;
        }
        void setNota3(float n3){
            nota3 = n3;
        }

};

class Turma{
    private:
        int capacidade = 50;
        int vagasOcupadas;
        vector<Aluno> alunos;
    
    public:
        void addAluno(Aluno aluno){
            alunos.push_back(aluno);
            vagasOcupadas = alunos.size();
        }

        void removeAluno(int posicao){
            alunos.erase(alunos.begin() + posicao);
            vagasOcupadas = alunos.size();
        }

        Aluno getAluno(int posicao){
            return alunos.at(posicao);
            }

        int getQuantidadeAlunos(){
            return vagasOcupadas;
        }

};

int main(){

    Turma BTI;

    Aluno teste(123, "name", 6.5, 5.5, 5.5);

    BTI.addAluno(teste);

    int x = teste.getMatricula();

    cout << x;


    return 0;
}