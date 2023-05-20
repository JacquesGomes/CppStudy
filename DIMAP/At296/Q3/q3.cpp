#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool findPairWithDifference(vector<int>& A, int X) {
    unordered_set<int> seenValues;
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size(); j++) {
            if (i == j) {
                continue;
            }
            int diff = A[i] - A[j];
            if (diff == X) {
                return true;
            }

            if (i != A.size() - 1 && A[i] - A[i] == X) {
                return true;
            }

            seenValues.insert(diff);
        }
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