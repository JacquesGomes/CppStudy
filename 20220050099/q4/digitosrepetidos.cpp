/**
 * @file digitosrepetidos.cpp
 * @author Jacques Gomes Pinheiro Junior | Matrícula: 20220050099 
 * @brief Recebe um número 'd' e outro número 'k' e retorna quantas vezes d foi repetido em 'k'
 * @param n Número que será checado quantas vezes foi repetido
 * @param m Número em que a checagem de repetições será feita
 * @return Quantidade total de repetições de 'd' em 'k'
*/

#include <bits/stdc++.h>

using namespace std;

int digitosRepetidos(int d, int k, int total){

    if(k == 0){
        /**
         * condição base em que todos os digitos já foram analisados
         */
        return total;
    }

    if (d == k%10){
        /**
         * encontrou um digito igual a d em k
         */
        total++;
    }

    int x = digitosRepetidos(d, k/10, total); 
    /**
     * continua chamando a função, sendo que com k/10, eliminando o digito que foi analisado na iteração corrente
     */

    return x;
    /**
     * retorna o resultado após todas as iterações
     */


}

int main(){

    int d, k;
    cin >> d >> k; 
    /**
     * recebe as entradas d e k
     */
    int total = 0; 
    /**
     * int que armazenará o total de repetições do dígito
     */

    int resposta = digitosRepetidos(d, k, total); 
    /**
     * chamada da função recursiva
     */
    cout << resposta << endl;

    return 0;
}