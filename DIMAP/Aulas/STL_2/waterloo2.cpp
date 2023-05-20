#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){ 

    unordered_map<string, string> words;

    string first, second;

    while (true) {
        getline(cin, first, ' ');
        getline(cin, second);
        if (first == "") {
            break;
        }
        words[second] = first;
    }

    string word;
    while (cin >> word) {
        if (words.find(word) != words.end()) {
            cout << words[word] << endl;
        } else {
            cout << "eh" << endl;
        }
    }

    return 0;
}