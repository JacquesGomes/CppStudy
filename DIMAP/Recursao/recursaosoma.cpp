#include <bits/stdc++.h>

using namespace std;

int somaElementos(vector<int> v, int a, int b) {
    if(a > b){
        return 0;
    }

    return v[a] + somaElementos(v, a+1, b);

}

int potencia(int base, int expoente) {
	if(expoente == 0){
		return 1;
	}

	return base * potencia(base, expoente - 1);
}

int somaDigitos(int n) {
	if(n<0){
		n = -n;
	}

	if(n<10){
		return n;
	}

    return n % 10 + somaDigitos(n/10);
	
}

int main (){

    vector<int> v = {4, 5, 2, 1, 3};

	cout << somaElementos(v, 0, 2) << endl;
	cout << somaElementos(v, 2, 4) << endl;

    cout << potencia(2, 3) << endl;
	cout << potencia(2, 3) << endl;

    cout << somaDigitos(810027) << endl;
	cout << somaDigitos(-1823) << endl;
    
    return 0;
}