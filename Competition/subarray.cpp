#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int total;
    cin >> total;
    int array[total];

    for (int i=0; i<total; i++){
        cin >> array[i];
    }

    int winner = 0;

    for (int i = 0; i<total; i++){
        int sum = 0;
        for (int j=i; j<total; j++){
            sum += array[j];
            winner = max(winner, sum);
        }
    }

    cout << winner << "\n";

    return 0;
}
