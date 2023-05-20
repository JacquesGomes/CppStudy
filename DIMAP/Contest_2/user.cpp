#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> points;
    vector<int> st_points;
    int x;
    int contador = 0;
    for(int i = 0; i<n; i++){
        cin >> x;
        points.push_back(x);
        st_points.push_back(x);
        sort(points.begin(), points.end());

        if(st_points[i] > points[i-1]){
            contador++;
        }
        else if(st_points[i] < points[1]){
            contador++;
        }

    }

    contador--;

    cout << contador;



    return 0;
}