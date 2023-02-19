#include <iostream>

using namespace std;

int ehpar(int *output, int number){

    int result;
    int outro;

    cin >> outro;

    //ternary expression
    result = (number + outro < 0)? 1:0;

    output = &outro;
    cout << *output << endl;
    
    return result;

}

int main (){

    int number = 1, number2;
    int ptr = 10;
    cout << "Enter a number: ";
    number2 = ehpar(&ptr, number);

    cout << number << endl;
    cout << ptr << endl;
    cout << number2<< endl;
}