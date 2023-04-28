/**
 * @file ncubos_alterado.cpp
 * @author Jacques Gomes Pinheiro Junior | Matrícula: 20220050099 
 * @brief Função que calcula a somado do cubo de todos os números do vetor
 * @param n Quantidades de números do vetor e os respectivos números
 * @param m Sequência de n números
 * @return Soma do cubo de todos os números do vetor
*/

#include <bits/stdc++.h>

using namespace std;

/**
 * fiz uma versão diferente do exercício, nela o programa recebe um número com a quantidade de números que irão ser calculados e em seguida n números
 * A saída é o cálculo da soma do cubo de todos os números do vetor
 */

int somaCubos(int *cubos, int n){

    if(n<=1){
        /**
         * caso base em que chagamos no último elemento do vetor
         */
        return cubos[0] * cubos[0] * cubos[0];
    }

    else{
        /**
         * inicialização da recursão
        */
        return (cubos[n-1] * cubos[n-1] * cubos[n-1]) + somaCubos(cubos, n-1); 
    }

}

int main(){

    int n;
    cin >> n;
    int cubos[n];

    for(int i=0; i<n;i++){
        cin >> cubos[i];
    }

    int totalcubos = somaCubos(cubos,  n);

    /**
     * ex de entrada e saída 3 3 2 1 
     * nesse caso n = 3, vetor cubos = {3, 2, 1} e a saída é 36
     */
    cout << totalcubos;



    return 0;
}