#include <bits/stdc++.h>
using namespace std;

int main (){

    int n, t;
    cin >> n >> t;

    int key[n];
    int value[n];
    map<int, int> maps;


    for(int i=0; i<n; i++){
        cin >> key[i];

    }

    for(int i=0; i<n; i++){
        cin >> value[i];

    }

    int maximo = 0;
    int flag = 0;

    for(int i=0; i<n; i++){
        if(key[i] == t){
            if(key[i] * value[i] > maximo){

                maximo = key[i] * value[i];
                maps[maximo] = i;
                flag = 1;

        }
        }
        }

    if(flag == 1){
        cout << maps[maximo] + 1;
    }

    else{

        map <int,int> maps2;
        maximo = key[0] * value[0];
        maps2[maximo] = 0;

        for(int i=0; i<n; i++){
            if(key[i] == key[0]){
                if(key[i] * value[i] > maximo){
                    maximo = key[i] * value[i];
                    maps2[maximo] = i;
                }
            }

        }
        cout << maps2[maximo] + 1;
        }
        
    return 0;

}
