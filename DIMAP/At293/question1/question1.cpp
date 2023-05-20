#include <iostream>
#include <string.h>

using namespace std;

int main (){

    string arr;
    cin >> arr;
    char temp;
    int tamanho = arr.length();

    for(int i=0; i<tamanho; i++){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i++;
    }

    for(int i=0; i<tamanho; i++){
        cout << arr[i];
    }

    return 0;
}