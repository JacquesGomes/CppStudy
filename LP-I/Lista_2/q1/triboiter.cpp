#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int nesimo = 0;
    int temp1 = 0;
    int temp2 = 1;
    int temp3 = 2;

    if(n < 2){
        cout << 0 << endl;
    }

    else{
        for(int i = 3; i <= n; i++){
            nesimo = temp1 + temp2 + temp3;
            temp1 = temp2;
            temp2 = temp3;
            temp3 = nesimo;
            
        }
        cout << nesimo << endl;
    }

    return 0;
}