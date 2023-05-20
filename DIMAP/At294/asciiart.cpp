#include <iostream>

using namespace std;

int main(){

    int h, w;
    cin >> h >> w;

    int a[h][w];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){

            cin >> a[i][j];

            switch(a[i][j]){
                
                case 0:
                    cout << ".";
                    break;

                case 1:
                    cout << "A";
                    break;

                case 2: 
                    cout << "B";
                    break;
                case 3: 
                    cout << "C";
                    break;

                case 4: 
                    cout << "D";
                    break;

                case 5: 
                    cout << "E";
                    break;

                case 6: 
                    cout << "F";
                    break;

                case 7: 
                    cout << "G";
                    break;

                case 8: 
                    cout << "H";
                    break;

                case 9: 
                    cout << "I";
                    break;

                case 10: 
                    cout << "J";
                    break;

                case 11: 
                    cout << "K";
                    break;

                case 12: 
                    cout << "L";
                    break;

                case 13: 
                    cout << "M";
                    break;

                case 14: 
                    cout << "N";
                    break;

                case 15: 
                    cout << "O";
                    break;

                case 16: 
                    cout << "P";
                    break;

                case 17: 
                    cout << "Q";
                    break;

                case 18: 
                    cout << "R";
                    break;

                case 19: 
                    cout << "S";
                    break;

                case 20: 
                    cout << "T";
                    break;

                case 21: 
                    cout << "U";
                    break;

                case 22: 
                    cout << "V";
                    break;

                case 23: 
                    cout << "W";
                    break;

                case 24: 
                    cout << "X";
                    break;

                case 25: 
                    cout << "Y";
                    break;

                case 26: 
                    cout << "Z";
                    break;

                default: 
                    break;
            }

        }
        cout << endl;
    }

    return 0;
}