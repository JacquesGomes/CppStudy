#include <iostream>

using namespace std;

int main(){

    int eventos;
    int players_size;

    cin >> players_size >> eventos;

    int players[players_size][2];

    for(int i=1; i<=players_size;i++){
        players[i][0] = i;
        players[i][1]=0;
    }

    for (int i = 0; i<eventos; i++){
        int temp_evento;
        int temp_player;

        cin >> temp_evento >> temp_player;

        if (temp_evento == 2){
            players[temp_player][1] = -1;
        }
        else if(temp_evento == 1){
            if(players[temp_player][1]==1){
                players[temp_player][1] = -1;
            }
            else {
                players[temp_player][1] = 1;
            }
        }
        else{
            if(players[temp_player][1]!=-1){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
        }
    }

    return 0;
}