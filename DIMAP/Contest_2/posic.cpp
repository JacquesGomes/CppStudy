#include <bits/stdc++.h>
using namespace std;

int pos[200001];

int main()
{
    int n,x; cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        pos[x] = i;
    }

    int ans = 1;

    for(int i = 1; i< n; i++)
    {
        if (pos[i] > pos[i + 1]) ans++;
    }

    cout << ans << '\n';

    return 0;
}