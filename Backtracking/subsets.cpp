#include <bits/stdc++.h>

using namespace std;

vector<int> realset;
vector<int> subsets;

void printSubset(int n, int index){

    for(int num : subsets){
        cout << num << " ";
    }
    cout << endl;

    for(int i = index; i < n; i++){
        subsets.push_back(i);
        printSubset(n, i+1);
        subsets.pop_back();
    }


}

int main(){

    int n;
    cin >> n;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        realset.push_back(x);
    }

    printSubset(n, 0);

    return 0;
}