#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool simula_sims(int* fome, int* sede, int* banheiro, int* sono, int* tedio){

    string acao;

    string comer = "comer";
    string beber = "beber";
    string dormir = "dormir";
    string jogar = "jogar videogame";
    string testejogar = "jogar";
    string lixo;

    bool resultado = true;
    string temp = "nullstring";

    cin >> acao;
    if(acao == testejogar){
        acao = "jogar videogame";
        cin >> lixo;
    }

    if(acao == comer){
        if(*fome < 71){
            *fome += 30;
        }
        else if (*fome >70){
            *fome = 100;
        }

        *banheiro -= 15;
        *sono -= 5;
        *tedio -= 5;
        *sede -=5;

    }
    else if(acao == beber){

        if(*sede < 71){
            *sede += 30;
        }
        else if (*sede >70){
            *sede = 100;
        }

        *banheiro -= 20;
        *sono -= 5;
        *tedio -= 5;
        *fome -=5;

    }
    else if(acao == dormir){

        if(*sono < 21){
            *sono += 80;
        }
        else if (*sono >20){
            *sono = 100;
        }

        if (*tedio < 71){
            *tedio += 30;
        }

        else if (*tedio > 70){
            *tedio = 100;
        }

        *fome -= 30;
        *sede -= 30;
        *banheiro -= 30;
    }
    else if(acao == jogar){
        if(*tedio < 21){
            *tedio = *tedio + 80;
        }
        else if (*tedio >20){
            *tedio = 100;
        }

        *fome -= 20;
        *sede -= 20;
        *banheiro -= 20;
        *sono -= 20;

    }
    else{
        //aliviar
        
        *banheiro = 100;

        *sede -= 5;
        *sono -= 5;
        *tedio -= 5;
        *fome -= 5;
    }


    if(*fome < 1 || *sede < 1 || *banheiro <1 || *sono < 1 || *tedio < 1){
        resultado = false;
    }

    if(*fome <= 15){
        cout << "Alerta: fome está com valor baixo" <<endl;
        if(*fome < 1){
            *fome = 0;
            cout << "Game Over! Morreu de fome" << endl;
        }
    }
    else if(*sede <=15){
        
        cout << "Alerta: sede está com valor baixo" <<endl;
        if(*sede < 1){
            *sede = 0;
            cout << "Game Over! Morreu de fome" << endl;
        }
    }
    else if(*banheiro <=15){
        cout << "Alerta: banheiro está com valor baixo" <<endl;
        if(*banheiro < 1){
            *banheiro = 0;
            cout << "Game Over! Morreu de fome" << endl;
        }
    }
    else if(*sono <=15){
        cout << "Alerta: sono está com valor baixo" <<endl;
        if(*sono < 1){
            *sono = 0;
            cout << "Game Over! Morreu de fome" << endl;
        }
    }
    else if(*tedio <=15){
        cout << "Alerta: tedio está com valor baixo" <<endl;
        if(*tedio < 1){
            *tedio = 0;
            cout << "Game Over! Morreu de fome" << endl;
        }
    }

    if (resultado == 1){
        return true;
    }
    else{
        //print stuff
       return false; 
    }
}

void imprime_relatorio(int fome, int sede, int banheiro, int sono, int tedio){

    cout << "Fome: " << fome << endl;
    cout << "Sede: " << sede << endl;
    cout << "Banheiro: " << banheiro << endl;
    cout << "Sono: " << sono << endl;
    cout << "Tédio: " << tedio << endl;

}


int main(){

    int fome, sede, banheiro, sono, tedio;

    int acoes;

    cin >> fome >> sede >> banheiro >> sono >> tedio;

    cin >> acoes;

    for (int i=0; i< acoes; i++){
        int ret = simula_sims(&fome, &sede, &banheiro, &sono, &tedio);
        if (ret == 0){
            break;
        }
    }

    imprime_relatorio(fome, sede, banheiro,sono, tedio);
    return 0;


    return 0;
}