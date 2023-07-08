#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, o;
    cin >> n >> m >> o;

    char a;
    cin >> a;

    if (a == 'A')
    {   
        m += ((o * 5) / 3);
        n += (m * 1.5);
        cout << n << "\n";
    }

    else if (a == 'B')
    {
        o += ((n * 2) / 5);
        m += ((o * 5) / 3);
        cout << m << "\n";
    }
    else
    {
        m += ((n * 2) / 3);
        o += ((m * 3) / 5);
        cout << o << "\n";
    }
}