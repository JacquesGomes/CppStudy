#include <iostream>
using namespace std;

class Cilindro{

    public:

        double volume(){
            //Function inside a class = method
            //Method have acess to all member variables inside the class
            return base * height;
        }

    private:
        int base = 1;
        int height = 5;
};

int main (){
    Cilindro x; // this is a object of Cilindro class
    cout << x.volume();
}