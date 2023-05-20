#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

	using namespace std;
	int main (){
    
    int n, m;

    cin >> n >> m;

    vector<int> she;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        she.push_back(x);
    }

    vector<int> he;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        he.push_back(x);
    }

    int count_both = 0;
    int i = 0, j = 0;

    // Find the common elements between the two vectors
    while (i < n && j < m) {
        if (she[i] == he[j]) {
            count_both++;
            if(i)
            i++;
            j++;
        }
        else if (she[i] < he[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << count_both << endl;
        
    return 0;
    }