#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int recursiveSum(int n){
    if (n <= 1){
        return n;
    }
    else{
        return n + recursiveSum(n-1);
    }
}

int main (){
    cout << "Hello\n";
    int x = 3;
    printf("%d", recursiveSum(x));
    return 0;
}