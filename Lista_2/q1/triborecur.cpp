/**
 * @file triborecur.cpp
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