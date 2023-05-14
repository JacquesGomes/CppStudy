#include <bits/stdc++.h>
using namespace std;

template<typename T>

void print1(T t){
    if constexpr(is_pointer<T>::value){
        cout << *t;
    }
    else{
        cout << t;
    }
}

template<typename A, typename B, typename C>

void print(A a, B b, C c){
    print1(a);
    
    cout << ", ";

    print1(b);

    cout << ", ";

    print1(c);
}

 

int main (){

    print(1, 2, 3);
    string hello = "Hello something";

    print(&hello, 2, hello);

    return 0;
}