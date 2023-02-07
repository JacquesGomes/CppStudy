#include <iostream>
using namespace std;

class Cilindro{

    private:
        //properties
        double base = 2;
        double height = 3;

    public:
        //behaviors

        Cilindro(){
            //constructor
            base = 3;
            height = 2;
        }

        //Cilindro() = default; (com esse comando, ainda que haja um constructor que aceita parâmetros, será possível iniciar um objeto sem parâmetros, usando as propriedades iniciais)

        Cilindro(double base_param, double height_param){
            base = base_param;
            height = height_param;

        }

        double volume(){
            return base * height;
        }


};

int main(){
    
    Cilindro cilindro1;
    Cilindro cilindro2(4,5);

    cout << cilindro2.volume() << endl;
    cout << cilindro1.volume() << endl;


}