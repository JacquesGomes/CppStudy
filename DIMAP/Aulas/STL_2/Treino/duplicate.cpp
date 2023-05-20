#include <bits/stdc++.h>

	using namespace std;
	int main (){

        set<int> dup;
        unordered_map<int, int> mapa;
        vector<int> teste;

        int x;
        int temp;
        int count;
        int contador = 0;

        while(cin >> x){
            dup.insert(x);
            temp = count;
            count = dup.size();
            if(temp == count){
                mapa[x]++;
            }
            else{
                mapa[x] = 1;
                teste.push_back(x);
                contador++;
            }
        }

        for(int i = 0; i < contador; i++){
            cout << teste[i] << " " << mapa.at(teste[i]) << endl;
        }
        
	return 0;
	}
