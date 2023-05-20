#include <bits/stdc++.h>

	using namespace std;
	int main (){

        multiset<int> dup;
        
        int x;
        int temp;
        int count;
        int i = 0;

        while(cin >> x){
            dup.insert(x);
            indice.insert(x);
            temp = count;
            count = dup.size();
            if(temp == count){
                mapa[x]++;
            }
        }

        for(auto it = indice.begin(); it != indice.end(); it++){
            cout << *it << " ";
            cout << mapa[*it] + 1 << endl;
        }

        
  

        


	return 0;
	}
