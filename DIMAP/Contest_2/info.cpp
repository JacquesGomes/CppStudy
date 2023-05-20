#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    int n;

    vector<int> oit;
    for(int i = 0; i<8; i++){
        cin >> n;
        oit.push_back(n);
    }

    sort(oit.begin(), oit.end());

    if(oit[7]== 9){
        cout << "F";
    }
    else{
        cout << "S";
    }
    return 0;
}