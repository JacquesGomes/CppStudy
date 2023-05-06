/**
 * @file smallestelement.cpp
 * @author Jacques Gomes Pinheiro Junior | Matrícula: 20220050099 
 * @brief Função que encontra o menor elemento de um vetor
 * @param n A entrada consiste em 'n' que é o total de números no array
 * @param m Em seguida, uma sequência de n números
 * @return Menor elemento do vetor
*/


#include <bits/stdc++.h>

using namespace std;

int smallestElement (int *vetor, int n){
    
    vetor[0] = min(vetor[0],vetor[n-1]); 
    /** 
     * executa a comparação dos elementos com a posição 0, de n-1 até a posição 1. Restará o menor elemento do array
     */

    if (n == 1){
        /**
         * caso base, se n == 1 já percorremos todo o array e fizemos todas as comparações
         */
        return vetor[0];
    }
    
    return smallestElement(vetor, n-1);
    /**
     * chama recursivamente a função até n == 1 
     */

}

int main(){

    /**
     * A entrada consiste em 'n' que é o total de números no array, em seguida, uma sequência de n números
     */

    int n;
    cin >> n;
    n++; 
    /**
     * aqui coletamos n e abrimos espaço para mais um integer, que será utilizado para guardar o menor elemento
     */

    int vetor[n];
    for(int i=1; i<n; i++){
        /**
         * essa função inicializa o vetor a partir de 1, deixando o espaço 0 para o menor elemento
         */
        cin >> vetor[i];
    }

    vetor[0] = vetor[n-1]; 
    /**
     * inicializamos o vetor[0] com qualquer número que faça parte do array
     */

    int smallest = smallestElement(vetor, n); 
    /**
     * chamamos a função recursiva
     */
    cout << smallest << endl;

    return 0;
}