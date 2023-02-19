#include <iostream>

using namespace std;

void dot (int *x){

    *x = 5;
    
}

int main(){

    int x = 2;
    int *p = &x; // same as p = &x (in case it was iniatilized in other place)

    cout << p << endl;
    cout << *p << endl;
    dot(p);
    cout << p << endl;
    cout << *p << endl;
    cout << x << endl;
    
    cout << &p << endl;
    cout << &*p << endl; 
    cout << *&p << endl; // same output as the previous
}