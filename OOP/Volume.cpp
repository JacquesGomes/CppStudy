#include <iostream>

using namespace std;

#define PI 3.1415

class Cilindro{
    
    private:
    
        double r;
        double h;
        
    public:
        
        Cilindro(double r_param, double h_param){
            r = r_param;
            h = h_param;
        }
        
        double volume(){
            return PI * r * r * h;
        }
};

int main (){
    
    double base, height;
    
    cin >> base >> height;
    
    Cilindro cilindro1(base, height);
    
    cout << cilindro1.volume() << endl;
    
}