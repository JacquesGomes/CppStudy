#include <iostream>

using namespace std;

template <typename Tipo>
// isso serve para dois tipos primitivos iguais
Tipo maximo(Tipo a, Tipo b)
{
    return (a > b) ? a : b;
}

template <typename T, typename T1>
//isso serve para dois tipos distintos
T divisao(T a, T1 b) { return a / b; }

int main()
{

    int a = 11, b = 5;

    double j = 5.5;

    cout << maximo(a, b) << endl;

    cout << divisao(a, j) << endl;
}