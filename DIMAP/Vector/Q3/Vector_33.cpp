#include <iostream>
#include <unordered_set>
#include <vector>
#include <set>

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m && n != 0 && m != 0) {

        set<int> jill_cds;
        int jack_cd, count = 0;
        int cd;

        for (int i = 0; i < n; i++) {
            cin >> cd;
            jill_cds.insert(cd);
        }

        for (int i = 0; i < m; i++) {
            cin >> jack_cd;
            if (jill_cds.find(jack_cd) != jill_cds.end()) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}