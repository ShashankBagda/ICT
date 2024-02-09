#include<bits/stdc++.h>

using namespace std;

int lcs(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
    {
        return 0;
    }
    if (X[m - 1] == Y[n - 1])
    {
        return 1 + lcs(X, Y, m - 1, n - 1);
    }   
    else
    {
        return max(lcs(X, Y, m, n - 1),
                   lcs(X, Y, m - 1, n));
    }
}

int main()
{
    string one, two;

    cout<<"Enter String One : ";
    cin>>one;

    cout<<"Enter String Two : ";
    cin>>two;

    cout<<one<<" "<<two<<endl;

    cout << "Length of LCS is " << lcs(one, two, one.size(), two.size());

    return 0;
}