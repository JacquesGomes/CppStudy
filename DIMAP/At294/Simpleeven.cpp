#include <bits/stdc++.h>

using namespace std;

int main (){

    int x;
    cin >> x;
    int y;
    
    for (int i = 0; i < x; i++){
        cin >> y;
        if(y%2 == 0){
        cout << y << " ";
        } 
    }

    return 0;
}