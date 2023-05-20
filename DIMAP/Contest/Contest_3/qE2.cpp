#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, q;

    cin >> n >> q;
    int z;
    unordered_map<int, int> m;
    int flag = 0;
    for(int i=1; i<=n; i++){
        cin >> z;
        if (m.count(q - z)) {
            cout << m[q - z] << " " << i;
            flag = 1;
            break;
        }
        m[z] = i;
    }

    if(flag == 0){
        cout << "IMPOSSIBLE";
    }

    return 0;
}