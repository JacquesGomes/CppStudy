#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

string gerarPalindromo(char k) {
	
    if(k == 'a'){
		return "a";
	}

	string prefixo = k + (gerarPalindromo(k-1)) + k;
	

	return prefixo;

}

int main (){

	cout << gerarPalindromo('d') << endl;

    return 0;
}