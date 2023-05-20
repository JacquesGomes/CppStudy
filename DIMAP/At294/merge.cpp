#include <iostream>

using namespace std;

int main (){

    int a, b;

    cin >> a >> b;

    int A[a];
    int B[b];

    for(int i = 0; i < a; i++){
        cin >> A[i];
    }

    for(int i = 0; i < b; i++){
        cin >> B[i];
    }

    int Bb[b];

    int az=0;
    int bz=0;
    int i = 0;

    for(i = 0; i < a+b; i++){

        if(az > a-1 || bz > b-1){
            break;
        }

        if(A[az] < B[bz]){
            cout << i+1 << " ";
            az++;
        }
        else{
            Bb[bz] = i+1;
            bz++;
        }

    }

    if (az < a){
        for(int j = 0; j<a-az; j++){
            cout << i+1 << " ";
            i++;
        }
    }

    cout << endl;

    if(bz > 0){
        for(int i = 0; i < bz; i++){
            cout << Bb[i] << " ";
        }
    }

    if (bz < b){
        for(int j = 0; j<b-bz; j++){
            cout << i+1 << " ";
            i++;
        }
    }

    return 0;
}