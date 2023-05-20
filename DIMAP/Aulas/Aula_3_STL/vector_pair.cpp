#include <bits/stdc++.h>
	using namespace std;


	int main (){
	
    vector<pair<int, int>> coordenadas;

    for(int i=0; i< 10; i++){
        int x = i;
        int y = 10-i;
        coordenadas.push_back({x, y});
    }
	
    for(int i=0; i<coordenadas.size(); i++){
        cout << "x = " << coordenadas[i].first << endl;
        cout << "y = " << coordenadas[i].second << endl;
        
    }

    for(auto p:coordenadas){
        cout << "x = " << p.first << endl;
        cout << "y = " << p.second << endl;
        
    }
	

	return 0;
	}
