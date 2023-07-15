/**
 * @file ncubos_original.cpp
 * @author Jacques Gomes
 * @brief Função que calcula a somado do cubo de todos os números do vetor
 * @param n quantidade de cubos
 * @return soma do cubo dos primeiros n cubos
*/

#include <bits/stdc++.h>

using namespace std;

/**
 * Recebe um número n e devolve a soma dos primeiros n cubos
 * exemplo de input: 3, saída: 36
 */

int somaCubos(int n){

    if(n==1){
        /**
         * caso base em que chegamos no número 1 e como o cubo de 1 é 1, retornamos 1
         */
        return 1;
    }

    else{
        /**
         * início da recursão com (o cubo de n) + (o cubo de n-1) até 1
         */
        return (n * n * n) + somaCubos(n-1); 
    }

}

int main(){

    int n;
    cin >> n;

    int totalcubos = somaCubos(n);

    cout << totalcubos;

    return 0;
}