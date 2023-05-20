#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;

    string teste;
    string ande = "and";
    string note = "not";
    string thate = "that";
    string thee = "the";
    string youe = "you";
    int i;
    bool test = false;
    
    for(i = 0; i < n; i++){
        cin >> teste;

        if(teste == ande){
            cout << "Yes";
            test = true;
            break;
        }

        if(teste == note){
            cout << "Yes";
            test = true;
            break;
        }
        
        if(teste == thate){
            cout << "Yes";
            test = true;
            break;
        }
        if(teste == thee){
            cout << "Yes";
            test = true;
            break;
        }
        if(teste == youe){
            cout << "Yes";
            test = true;
            break;
        }
    }

    if(test == 0){
        cout << "No";
    }

    return 0;
}