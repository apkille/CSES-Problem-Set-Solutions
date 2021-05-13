/*
    author: kille
*/
 
#include <bits/stdc++.h>
#define ll long long
#define ld long double
 
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    vector <int> v(n);
    ll res = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int j = 0; j < n-1; j++)
    {
        if (v[j] > v[j+1])
        {
            res += v[j] - v[j+1];
            v[j+1] = v[j];
        }
    }
    cout << res;
}
    
    