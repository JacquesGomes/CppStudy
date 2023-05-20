#include <bits/stdc++.h>
	using namespace std;

	template<class T>

	T maior(T a, T b){
		if(a>b){

			return a;
		}
		else{
				return b;
			}
	}

	int main (){
	int ai = 3, bi = 3;
	string as = "primeiro", bs = "segundo";
	cout << maior<int>(ai,bi) << endl;
	cout << maior<string>(as, bs) << endl;
	
	

	return 0;
	}
