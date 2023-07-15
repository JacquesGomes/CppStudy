

#ifndef TURMA_HPP
#define TURMA_HPP

#include <vector>
#include "Aluno.hpp"

using namespace std;

class Turma{

    /**
     * @class Turma
     *  @brief Classe que representa uma turma. A classe Aluno tem como objetivo representar uma turma, com capacidade, vagas e uma lista de alunos. Também possui métodos para acesso e manipulação dessas informações.
        */
    public:
        void adicionarAluno(Aluno aluno);
        void ordenar(int preferencia);

        vector<Aluno> getAlunos();

        void imprimirAlunos();
        void removerAluno();

        int getCapacidade();
        int getVagas();

        void setCapacidade(int capacidade);
        Turma();
        Turma(int capacidade);
        ~Turma();

    private:
        vector<Aluno> alunos;
        int capacidade;
        int vagas;
};

#endif