#include <iostream>

using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    if(a+b >= 7){
        cout << 7;
    }
    else if(a+b==5){
        if(a == 4 || b == 4){
            cout << 5;
        }
        else{

        
        cout << 3;
        }
    }
    else if(a == b){
        cout << a;
    }
    else if(a == 3 || b == 3){
        cout << 3;
    }
    else{
        cout << (a+b);
    }
    return 0;
}