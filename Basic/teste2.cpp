#include <iostream>
#include <iomanip>


using namespace std;

int main (){
    double num;
    cin >> num;
    
    cout << "A=";
    cout << setprecision(4) << fixed << 3.14159 * (num * num) << endl;
    return 0;
}