/*
    author: kille
*/
 
#include <bits/stdc++.h>
#define ll long long
#define ld long double
 
using namespace std;
 
int main()
{
    string n;
    cin >> n;
    ll a = 1;
    ll max = 1;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == n[i+1])
        {
            a++;
            if (a > max)
                max = a;
        }
        else if (n[i] != n[i+1])
            a = 1;
    }
    cout << max;
    return 0;
}