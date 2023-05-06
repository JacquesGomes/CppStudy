/**
 * @file main.cpp
 * @author Jacques Gomes Pinheiro Junior | Matrícula: 20220050099 
 * @brief Recebe o número que será utilizado pelo programa e faz a chamada das funções fatorial e primalidade
 * @param n Número que será utilizado pelo programa para calcular o fatorial e encontrar o primo anterior ao resultado do fatorial
 * @return Número primo anterior ao resultado do fatorial
*/

#include <bits/stdc++.h>

using namespace std;

#include "primalidade.hpp"
#include "fatorial.hpp"

int main (){

    int n;
    cin >> n; 
    /**
     * recebe o número inicial via linha de comando
     */

    long int ntotal = fatorial(n); 
    /**
     * chama função de fatorial e recebe o valor de n!
     */

    long int aux = 2; 
    /**
     * inicia a variável aux para ajudar na busca do número primo
     */
    
    long int primo = primalidade(ntotal, aux);
    /**
     * chama a função que encontrará o número primo
     */

    cout << primo << endl;

}