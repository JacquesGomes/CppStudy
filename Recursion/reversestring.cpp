#include <bits/stdc++.h>

using namespace std;

string reversestring(string s){

    if(s.length()==0){
        return "";
    }
    else if (s.length() == 1 ){
        return s;
    }

    else{
        return s[s.length()-1] + reversestring(s.substr(1, s.length()-2)) + s[0];
    }

}

int main(){
    string s = "helloworld";
    cout << reversestring(s) << endl;
    return 0;
}