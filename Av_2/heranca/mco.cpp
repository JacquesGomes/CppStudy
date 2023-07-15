#include <iostream>

using namespace std;

class Animal{
    private:
        int idade;
        string nome;
    
    public:
        Animal(string nome, int idade) : nome(nome), idade(idade) {}

        void setNome(string nome){
            this->nome = nome;
        }

        string getNome(){
            return this->nome;
        }

        void setIdade(int idade){
            this->idade = idade;
        }

        int getIdade(){
            return this->idade;
        }
};

class Cachorro : public Animal{

    public:
        Cachorro(string nome, int idade) : Animal(nome, idade){};

        void latir(){
            cout << getNome() << " está latindo!" << endl;
        }
};

int main(){

    Cachorro dog("dogao", 10);

    dog.setNome("Joao");
    dog.latir();
}