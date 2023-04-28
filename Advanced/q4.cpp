#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long smallest = LLONG_MAX;
    for (long long a = 1; a <= N; a++) {
        long long b = max(M / a, 1LL); // set lower bound of b
        long long upper_bound = min(N, M / b); // set upper bound of b
        while (b <= upper_bound) {
            long long X = a * b;
            if (X >= M && X < smallest) {
                smallest = X;
            }
            b++; // try next value of b
        }
    }

    if (smallest == LLONG_MAX) {
        cout << "-1" << endl;
    } else {
        cout << smallest << endl;
    }

    return 0;
}