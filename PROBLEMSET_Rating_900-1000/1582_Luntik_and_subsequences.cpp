#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            zero++;
        else if (a[i] == 1)
            one++;
    }
    cout << one * (1LL << zero) << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout << setprecision(10);
   
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}