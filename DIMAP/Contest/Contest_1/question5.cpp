#include <iostream>

using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    if (a == 7 || b == 7){
        cout << 7;
    }
    else if(a+b == 7){
        cout << 7;
    }
    else if(a+b == 6){
        cout << 6;
    }
    else if(a+b == 4){
        cout << 2;
    }
    else if(a+b == 1){
        cout << 1;
    }

    else if(a+b == 5){
        cout << 5;
    }

    else if(a+b == 3){
        cout << 3;
    }
    return 0;
}