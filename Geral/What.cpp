#include <iostream>

using namespace std;

int main () {

    int n;
    int p, v, t;
    cin >> n;
    int contador = 0;

    for (int i =0; i<n; i++){
        cin >> p >> v >> t;

        if (p + v + t >= 2){
            contador++;
        }

    }
    cout << contador;
}