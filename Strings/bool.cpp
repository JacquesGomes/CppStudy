#include <iostream>

using namespace std;

bool teste (int x){
    if(x == 1){
        return false;
    }
    else{
        return true;
    }
}

int main (){
    int x = 1;
    bool outp = true;
    bool outp2 = false;

    bool x1 = teste(x);

    cout << outp;
}