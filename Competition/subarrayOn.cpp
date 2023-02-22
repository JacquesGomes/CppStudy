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
    int sum = 0;

    for (int i = 0; i<total; i++){
        sum = max(array[i], sum+array[i]);
        //compares the current element with the result of adding this element in the sum.
        //If the current element is equal or greater then the current sum, we can abandon the rest and check if another greater int will be reach till the end of the array
        winner = max(winner, sum);
    }

    cout << winner << "\n";

    return 0;
}
