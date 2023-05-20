#include <iostream>

using namespace std;

int main (){
    int a, b;
    cin >> a >> b;

    if(a == b){
        cout << a;
    }
    
    else if (a == 7 || b == 7){
        cout << 7;
    }

    else if(a == 6 || b == 6){

        if(a == 2 || b == 2){
            cout << 6;
        }
        else if (b == 4 || a == 4){
            cout << 6;
        }
        else if (b==0 || a==0){
            cout << 6;
        }
        else{
            cout << 7;
        }
    }

    else if (a == 5 || b == 5){
        if(a == 4 || b == 4){
            cout << 5;
        }
        else if (a == 1 || b == 1){
            cout << 5;
        }
        else if(a == 0 || b == 0){
            cout << 5;
        }
        else{
            cout << 7;
        }
    }

    else if(a == 4 || b == 4){
        if (a == 2 || b==2){
            cout << 6;
        }
        else if (a == 1 || b == 1){
            cout << 5;
        }
        else if (a == 0 || b == 0){
            cout << 4;
        }

        else{
            cout << 7;
        }
        
    }
    else if(a == 3 || b == 3){
        cout << 3;
    }
    else if(a == 2 || b == 2){
        if (a == 1 || b == 1){
            cout << 3;
        }
        else{
            cout << 2;
        }
    }
    else{
        cout << a + b;
    }

    return 0;
}