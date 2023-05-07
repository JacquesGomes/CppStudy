/**
 * @file triboiter.cpp
 * @author Jacques Gomes Pinheiro Junior | Matrícula: 20220050099 
 * @brief Calcula o n-ésimo termo da sequência de Fibonacci modificada que é definida como F(i) = F(i-1) + F(i-2) + F(i-3), para i > 2 e F(0) = 0, F(1) = 1 e F(2) = 2.
 * Exemplo de uso:
 * Digite um número inteiro: 5
 * Saída: 11
 * @param n Valor inteiro que representa o termo desejado na sequência
 * @return O n-ésimo termo da sequência de Fibonacci modificada
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int nesimo = 0;
    int temp1 = 0;
    int temp2 = 1;
    int temp3 = 2;

    if(n < 2){
        cout << 0 << endl;
    }

    else{
        for(int i = 3; i <= n; i++){
            nesimo = temp1 + temp2 + temp3;
            temp1 = temp2;
            temp2 = temp3;
            temp3 = nesimo;
            
        }
        cout << nesimo << endl;
    }

    return 0;
}