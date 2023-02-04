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
int a1=2*b-c;
if(a1!=0 && a1%a==0 && a1>=a){
	cout<<"YES"<<endl;
	return;
}
int b1=(a+c)/2;
if(b1!=0 && (a+c)%2==0 && b1%b==0 && b1>=b){
	cout<<"YES"<<endl;
	return;
}
int c1=2*b-a;
if(c1!=0 && c1%c==0 && c1>=c){
	cout<<"YES"<<endl;
	return;
}
cout<<"NO"<<endl;
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
// 11
// 10 5 30
// 30 5 10
// 1 2 3
// 1 6 3
// 2 6 3
// 1 1 1
// 1 1 2
// 1 1 3
// 1 100000000 1
// 2 1 1
// 1 2 2
// Output--
// YES
// YES
// YES
// YES
// NO
// YES
// NO
// YES
// YES
// NO
// YES
