#include <bits/stdc++.h>

using namespace std;

int main(){

    string entrada;
    cin >> entrada;

    sort(entrada.begin(), entrada.end());
    int l = entrada.length();

    int answer = 0;

    for(int i = 1; i < l; i++){
        if(entrada[i] != entrada[i-1]){
            answer++;
        }
    }

    answer++;

    if(answer % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }

    return 0;
}