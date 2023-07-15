/**
 * @file Aluno.h
 * @brief Declaração da classe Aluno. Neste arquivo .h, são declarados os métodos e atributos da classe Aluno. Essa classe tem como objetivo representar um aluno, com nome, matrícula e notas. Também possui métodos para acesso e manipulação dessas informações.
*/

#ifndef ALUNO_H
#define ALUNO_H

#include <string>

using namespace std;



class Aluno{
    /**
     * @class Aluno
     * @brief Classe que representa um aluno.
     * A classe Aluno tem como objetivo representar um aluno, com nome, matrícula e notas. Também possui métodos para acesso e manipulação dessas informações.
    */

    private:
        int matricula;
        string nome;
        float nota1;
        float nota2;
        float nota3;

    public:

        /**
        * @brief Construtor da classe Aluno.
        *
        * @param matricula Número de matrícula do aluno.
        * @param nome Nome do aluno.
        * @param nota1 Nota 1 do aluno.
        * @param nota2 Nota 2 do aluno.
        * @param nota3 Nota 3 do aluno.
        */

        Aluno(int matricula, string nome, float nota1, float nota2, float nota3);

         /**
         * @brief Construtor padrão da classe Aluno.
         */
        Aluno();

        /**
         * @brief Getters
         */
        string getNome();
        int getMatricula();
        float getNota1();
        float getNota2();
        float getNota3();

        /**
         * @brief Setters
         */
        void setNome(string nome);
        void setMatricula(int matricula);
        void setNota1(float nota1);
        void setNota2(float nota2);
        void setNota3(float nota3);

        /**
         * @brief Calcula media
         */
        float calculaMedia();
    
};

#endif // !ALUNO_H
