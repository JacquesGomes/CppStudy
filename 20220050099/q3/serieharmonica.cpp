/**
 * @file serieharmonica.cpp
 * @author Jacques Gomes Pinheiro Junior | Matrícula: 20220050099 
 * @brief Programa que calcula o valor de qualquer número harmônico
 * @param n Número que será usado para calcular o número harmônico
 * @return Número harmônico de n
*/

#include <bits/stdc++.h>

using namespace std;

int serieHarmonica(int n){

    if(n==1){
        /**
         * caso n == 1,  temos o caso inicial em que 1 é somado ao restante da equação (o calculo é feito pelo fim, de 1/n até 1)
         */
        return 1;
    }
    
    return 1/n + serieHarmonica(n-1);
    /**
     * começamos pelo fim da equação (1/n + 1/n-1 ... 1/2 + 1)
     */
}

int main(){

    /**
     * recebe n e chama função recursiva para calcular o número harmônico de n
     */
    int n;
    cin >> n;
    int resposta = serieHarmonica(n);
    cout << resposta << endl;

    return 0;
}