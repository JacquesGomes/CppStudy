#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, q;

    cin >> n >> q;
    int z;
    vector<int> v;
    vector<int>::iterator it;
    int flag = 0;
    for(int i=0; i<n; i++){
        cin >> z;
        v.push_back(z);
    }
    int temp;
    for(int i=0; i<n; i++){
        temp = q - v[i];
        it = find(v.begin(), v.end(), temp);
        if(it != v.end() && i+1 != (it - v.begin())+1){
            cout << i+1 << " " << (it - v.begin())+1;
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << "IMPOSSIBLE";
    }

    return 0;
}