#include <bits/stdc++.h>

using namespace std;


int fiboIterativo(int n) {
    int a = 0, b = 1, c;
    int i = 2;
    if(n == 1) {
        return a;
    }
    else{
        if(n == 2) {
        return b;
        }
        else{
        while(i < n) {
        c = a + b; 
        a = b;
        b = c;
        i++;
        }
        return c;
        }
    }

}

int main (){

    int x;
    cin >> x;

    int y = fiboIterativo(x);
    cout << y << endl;

}