#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin >> x;

    vector<int> temp;

    vector<int> tem;

    int teste;

    for (int i = 0; i < x; i++)
    {
        cin >> teste;

        if (teste == x)
        {
            continue;
        }

        if (teste % 2 == 0)
        {
            temp.push_back(teste);
        }
        else
        {
            tem.push_back(teste);
        }
    }

    int flagimpar = 0;
    int flagpar = 0;
    int resultimpar = 0;
    int resultpar = 0;

    if (tem.size() > 1)
    {
        sort(tem.begin(), tem.end());
        int impar = tem[tem.size() - 1];
        int impar2 = tem[tem.size() - 2];
        resultimpar = impar + impar2;

        flagimpar = 1;
    }
    if (temp.size() > 1)
    {
        sort(temp.begin(), temp.end());
        int par = temp[temp.size() - 1];
        int par2 = temp[temp.size() - 2];
        resultpar = par + par2;

        flagpar = 1;
    }

    if (flagimpar == 0)
    {
        if (flagpar == 0)
        {
            cout << "-1" << endl;
        }
        else
        {

            cout << resultpar;
        }
    }
    else if (flagpar == 0)
    {
        if (resultimpar % 2 == 0)
        {
            cout << resultimpar << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    else
    {
        if (resultimpar >= resultpar && resultimpar % 2 == 0)
        {
            cout << resultimpar << endl;
        }
        else
        {
            cout << resultpar << endl;
        }
    }

    return 0;
}