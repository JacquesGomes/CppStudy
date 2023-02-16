#include <iostream>

using namespace std;

int main (){

    int number = 2;
    int *ptr;
    int *ptr2;
    int number2 = 5;

    cout << "Números iniciais: " << " " << number << " " << *ptr << " " << *ptr2 << " " << number2 << endl;



    ptr2 = &number2;

    number = *ptr2;

    ptr = &number;

    cout << "Números finais: " << ptr << " " << *ptr << " " << ptr2 << " " << *ptr2 << " " << number << " " << &number;

    return 0;
    }