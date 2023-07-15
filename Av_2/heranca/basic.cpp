#include <iostream>

using namespace std;

class Veiculo{
    protected:
        string cor;
        string ano;
        string placa;
        string proprietario;
        string modelo;
        void ligar();
        void andar();
        void parar();
        
};

class Carro : protected Veiculo{
    protected:
        double motor;
};


class Caminhao : protected Veiculo{
    protected:
        int eixos;
        double capacidadeKg;
};

class Moto : protected Veiculo{
    protected:
        int eixos;
        double cilindradas;

    public:

        void setAno(string ano){
            this->ano = ano;
        }

        void setCilindradas(double cilindradas){
            this->cilindradas = cilindradas;
        }

        string getAno(){
            return this->ano;
        }

        

};

int main(){

    Moto bis;

    bis.setCilindradas(5.5);
    bis.setAno("2025");

    string x = bis.getAno();

    cout << x << endl;
    
    



    
}