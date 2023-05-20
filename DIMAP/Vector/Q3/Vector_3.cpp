#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;
int main (){
    
    long long n, m;
    long long counter = 0;

    cin >> n >> m;

    set<long long> n_m;

    if(n <= 0 || m <= 0){
        cout << 0 << endl;
        return 0;
    }

    for(int i=0; i<n; i++){
        long long x;
        scanf("%lld", &x);
        n_m.insert(x);
    }

    for(int i=0; i<m; i++){
        long long x;
        scanf("%lld", &x);
        if(x == 0){
            break;
        }
        if(n_m.find(x) != n_m.end()){
            counter++;
        }
    }

    printf("%lld\n", counter);  
        
    return 0;
    }