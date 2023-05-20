#include <bits/stdc++.h>

using namespace std;

int main (){

    int n, k;
    int limit = 240;

    cin >> n >> k;
    int total = k;
    int i = 0;
    int x = 0;

    for(i=0; i<n; i++){
        total += 5 * i;
        if(total + 5 * (i + 1) > limit){
            cout << i; 
            x = 1;
            break;
        }
    }

    if(x == 0){
        cout << i;
    }




    return 0;
}