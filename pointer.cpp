#include <iostream>

using namespace std;

int main (){

    int inteiro;
    int *ptr = &inteiro;

    *ptr = 2;

    cout << *ptr << " " << ptr;

    return 0;
}