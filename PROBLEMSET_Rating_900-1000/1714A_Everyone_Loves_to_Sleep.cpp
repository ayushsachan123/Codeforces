#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve() {
  int a,b,c;
  cin>>a>>b>>c;
  vector<pair<int,int>> v(a);
  pair<int,int> p={b,c};
  for(int i=0;i<a;i++){
  	cin>>v[i].first>>v[i].second;
  }
  sort(v.begin(),v.end());
  auto lb= lower_bound(v.begin(),v.end(),p)-v.begin();
  auto ub= upper_bound(v.begin(),v.end(),p)-v.begin();
if(lb!=ub){
	cout<<0<<" "<<0<<endl;
}
else{
	if(ub==a){
		int hh = 23-b ,mm=60-c;
       int fmm = v[0].second+mm;
int carry = fmm/60;
fmm = fmm%60;
int fhh = v[0].first+hh +carry;
cout<<fhh<<" "<<fmm<<endl;
	}

	else{
		int flag=0;
		if(v[ub].second<c)
			v[ub].second+=60, v[ub].first--;
		cout<<v[ub].first-b<<" "<<v[ub].second-c<<endl;
	}
}

}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--) solve();

	return 0;
}

//Input--
// 3
// 1 6 13
// 8 0
// 3 6 0
// 12 30
// 14 45
// 6 0
// 2 23 35
// 20 15
// 10 30
// Output--
// 1 47
// 0 0
// 10 55
