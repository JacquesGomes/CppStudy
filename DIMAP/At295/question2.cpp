#include <iostream>
#include <string>

using namespace std;

int main(){

    int a, b;

    cin >> a >> b;

    char mat[a][b];
    int bombs[400];
    int positions[400];

    int contador = 0;
    int contador2 = 0;


    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cin >> mat[i][j];
            if (mat[i][j] >= '1' && mat[i][j] <= '9'){
                bombs[contador] = mat[i][j] - '0';
                positions[contador2] = i;
                contador2++;
                positions[contador2] = j;
                contador2++;
                contador++;
            }
        }
    }

    int contador3= 0;
    int contador4= 0;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (mat[i][j] != '#' && abs(i - positions[contador3]) + abs(j - positions[contador3+1]) <= bombs[contador4]) {
                mat[i][j] = '.';
                contador3++;
                contador4++;
            }
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << mat[i][j];
        }
        cout << endl;
    }



    return 0;
}