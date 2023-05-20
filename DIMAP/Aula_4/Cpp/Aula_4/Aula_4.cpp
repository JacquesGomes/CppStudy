#include <bits/stdc++.h>
    #define endl '\n'
    #define FOR(i,n) for(int i=0; i<n; i++)
	using namespace std;

	int main (){
	int x;
	cin >> x;

	set<string> words;
	map<string, int> words_map;

	string y;
	FOR(i,x){
		cin >> y;
		if(words.insert(y).second == false){
			words_map[y]++;
			cout << y << words_map[y];
		}
		else{
			cout <<"OK";
		}
		cout << endl;
	}

	return 0;
	}
