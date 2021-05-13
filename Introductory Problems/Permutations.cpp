/*
    author: kille
*/
 
#include <bits/stdc++.h>
#define ll long long
#define ld long double
 
using namespace std;
 
void permutation(ll a)
{
    if (a == 1)
        cout << a;
    else if (a == 2 || a == 3)
        cout << "NO SOLUTION";
    else {
        if (a % 2 == 0)
        {
            for (int i = 2; i <= a; i+=2)
                cout << i << " ";
            for (int j = 1; j <= a; j+=2)
                cout << j << " ";
        }
        else {
            for (int i = a-1; i >= 1; i-=2)
                cout << i << " ";
            for (int j = a; j >= 1; j-=2)
                cout << j << " ";
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    permutation(n);
    return 0;
}