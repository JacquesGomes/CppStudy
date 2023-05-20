#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int tamanho;
    cin >> tamanho;

    vector<int> arr(tamanho);
    vector<int> called;
    vector<int> notcalled;

    for (int i = 0; i < tamanho; i++) {
        cin >> arr[i];
        if (arr[i] == i+1) {
            called.push_back(arr[i]);
        } else {
            notcalled.push_back(i+1);
        }
    }

    sort(notcalled.begin(), notcalled.end());

    int contador3 = 0;
    for (int i = 0; i < notcalled.size(); i++) {
        if (i >= called.size() || notcalled[i] < called[i]) {
            contador3++;
        }
    }

    cout << contador3 << endl;
    for (int i = 0; i < notcalled.size(); i++) {
        if (i >= called.size() || notcalled[i] < called[i]) {
            cout << notcalled[i] << " ";
        }
    }

    return 0;
}