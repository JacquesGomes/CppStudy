#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool findPairWithDifference(vector<int>& A, int X) {
    unordered_set<int> seenValues;
    for (int i = 0; i < A.size(); i++) {
        int diff1 = A[i] - X;
        int diff2 = A[i] + X;
        if (seenValues.count(diff1) > 0 || seenValues.count(diff2) > 0) {
            return true;
        }
        else if (A[i] - A[i] == X){
            return true;
        }
        seenValues.insert(A[i]);
    }
    return false;
}

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    if (findPairWithDifference(A, X)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}