#include <bits/stdc++.h>

using namespace std;

int fiboRecursivo(int n){

if (n==1){
    return 0;
}

else if (n==2){
    return 1;    
}

else{
return fiboRecursivo(n-1) + fiboRecursivo(n-2);
}

}
int main(){

int x;

cin >> x;
int y = fiboRecursivo(x);

cout << y << endl;
}
