#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){ 

    unordered_map<string, string> words;

    string word;

    while(getline(cin, word) && !word.empty()){

        string first, second;
        int middle = word.find(' ');

        first = word.substr(0, middle);
        second = word.substr(middle + 1);
        
        words[second] = first;

    }

    while(cin >> word){
        if(words.count(word) == 1){
            cout << words[word] << endl;
        }
        else{
            cout << "eh" << endl;
        }
    }

    return 0;
}