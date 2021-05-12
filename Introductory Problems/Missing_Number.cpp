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
    ll total = 0;
    for (int i = 0; i < n-1; i++)
    {
        ll a;
        cin >> a;
        total += a;
    }
    cout << (n*(n+1) / 2) - total;
    return 0;
}