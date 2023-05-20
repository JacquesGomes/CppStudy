#include <iostream>

using namespace std;

int main (){

    vector<int> called(200001,0);
    vector<int> who;

    int n;
    cin >> n;

    for(int i = 1; i <=n; i++){
        int x;
        cin >> x;
        if(called[i]) continue;
        called[x] = 1;

    }

    for(int i = i; i<=n; i++){
        if(!called[i]){
            who.push_back(i);
        }
    }
    cout << who.size() <<endl;
    for(int i=0; i< who.size(); i++){

    }

    //rafaelbg terminar de anotar
    return 0;
}