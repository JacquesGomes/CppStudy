#include <bits/stdc++.h>
    #define endl '\n'
    #define FOR(i,n) for(int i=1; i<=n; i++)
	using namespace std;

	int main (){

		int y;
		long long x;

		cin >> x >> y;
		
		//map que armazena o valor como key e o índice como valor
		map<int, int> mapp;

		//array que armazena os valores
		long long numbers[x+1];
		int z;
		int count = 0;

		FOR(i,x){
			cin >> z;
			mapp[z] = i;
			numbers[i] = z;
			count++;

		}

		int flag = 0;
		int contador = 1;

		FOR(i, count){

			int q = y - numbers[contador];
			//int q1 = numbers[contador] - y;

			if(mapp.count(q) == 1 && contador != mapp[q]) {
				cout << contador << " ";
				cout << mapp[q];
				flag = 1;
				break;
			}

			/*else if(mapp.count(q1) == 1 && mapp[q1] != mapp[numbers[contador]]) {
				cout << mapp[numbers[contador]] << " ";
				cout << mapp[q1];
				flag = 1;
				break;
			}*/

			contador++;
		}
	
		if(flag == 0){
			cout << "IMPOSSIBLE";
		}

	
	return 0;
	}
