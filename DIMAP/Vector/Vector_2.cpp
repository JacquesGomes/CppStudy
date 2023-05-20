#include <bits/stdc++.h>
	using namespace std;
	int main (){
	
	int an, bn;
	cin >> an;

	vector<int> arrA;

	for(int i=0; i<an; i++){
		int x; 
		cin >> x;
		arrA.push_back(x);
	}

	cin >> bn;

	vector<int> arrB;

	for(int i=0; i<bn; i++){
		int x; 
		cin >> x;
		arrB.push_back(x);
	}

	sort(arrA.begin(), arrA.end());

	sort(arrB.begin(), arrB.end());


	vector<int> possible_sol;
	int flag = 0;
	
	for(int i = 0; i<an; i++){
		int a = arrA[0+i], b = arrB[0];
		for(int j = 0; j<an; j++){
			if(a+b <= arrA[j]){
				continue;
			}
			if(a+b != arrA[j]){
				possible_sol.push_back(a+b);
				sort(possible_sol.begin(), possible_sol.end());
			}
		}

		for(int j = 0; j<bn; j++){
			if(a+b <= arrB[j]){
				continue;
			}
			if(a+b != arrB[j]){
				if(a+b != possible_sol[0]){
					cout << a << " " << b << endl;
					flag = 1;
					break;
				}
				possible_sol.push_back(a+b);
			}
		}
		
		if(flag == 1){
			break;
		}

	}

	vector<int> possible_sol2;

	if(flag == 0){
		for(int i = 0; i<bn; i++){
		int a = arrA[0], b = arrB[0+i];
		for(int j = 0; j<an; j++){
			if(a+b <= arrA[j]){
				continue;
			}
			if(a+b != arrA[j]){
				possible_sol2.push_back(a+b);
				sort(possible_sol.begin(), possible_sol.end());
			}
		}

		for(int j = 0; j<bn; j++){
			if(a+b <= arrB[j]){
				continue;
			}
			if(a+b != arrB[j]){
				if(a+b != possible_sol2[0]){
					cout << a << " " << b;
					flag = 1;
					break;
				}
				possible_sol2.push_back(a+b);
			}
		}
		
		if(flag == 1){
			break;
		}

	}
	}

	return 0;
	}
