#include <iostream>

using namespace std;

int main(){

    int a,b;

    cin >> a >> b;
    int x = 0;
    int soma = 0;

    int score[a];

    for(int i = 0; i<a;i++){
        cin >> x;
        score[i] = x;
    }
    int y = 0;
    for (int i = 0; i<b; i++){
        cin >> y;
        soma = soma + score[y-1];
    }
    cout << soma;
  return 0;
}