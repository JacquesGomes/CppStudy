#include <iostream>

using namespace std;

int main(){
    int total;

    cin >> total;

    for (int i = 0; i<total; i++){
        int a, b;
        cin >> a >> b;

        if (a > b){
            cout << ">" << endl;
        }
        else if(b > a){
            cout << "<" << endl;
        }

        else{
            cout << "=" << endl;
        }
    }
}