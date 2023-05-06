#include <bits/stdc++.h>

using namespace std;

int tribonacci(int n){

    if(n==2){
        return 2;
    }
    else if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }

    else{
        return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);  
    }

}

int main(){

    int n;
    cin >> n;
    
    int result = tribonacci(n);

    cout << result << endl;

    return 0;
}