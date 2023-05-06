/**
 * @file fatorial.cpp
 * @author Jacques Gomes Pinheiro Junior | Matrícula: 20220050099 
 * @brief Calcula o fatorial do número recebido como parâmetro
 * @param n Número que será usado para calcular o fatorial
 * @return Fatorial do número recebido
*/

#include "fatorial.hpp"
#include <iostream>

int fatorial(int n){

    if(n == 0){
        /**
         * caso base em que n == 0 e já coletamos todas as multiplicações
         */
        return 1;
    }

    int x = n * (fatorial(n-1)); 
    /**
     * chamada da função recursiva com n * n-1 até n == 0
     */
    return x;
}