#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll a, b;
    cin >> a >> b;
    vector<int> v(b);
    for (int i = 0; i < b; i++)
    {
      cin >> v[i];
    }
    sort(v.begin(), v.end());

    ll i = 0, ans = 0, temp = 0;
    while (i < v[b - 1] && b > 0)
    {
      temp = a - v[b - 1];
      ans++;
      i += temp;
      b--;
    }
    cout << ans << endl;
  }
}