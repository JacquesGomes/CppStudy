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
	
	for(int i = 0; i < an; i++){
        int a = arrA[i];
        for(int j = 0; j < bn; j++){
            int b = arrB[j];
            if(find(arrA.begin(), arrA.end(), a+b) == arrA.end() && find(arrB.begin(), arrB.end(), a+b) == arrB.end()){
                possible_sol.push_back(a+b);
                flag = 1;
                cout << a << " " << b << endl;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }



	return 0;
	}
