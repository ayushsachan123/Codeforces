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
	int n;
	cin>>n;
	vector<int> k;
	vector<int> even;

	for(auto i=0;i<n;i++){
		int d;
		cin>>d;
		if(d%2!=0){
			k.push_back(d);
		}
		else{
			even.push_back(d);
		}
}
int oddMin = INT_MAX;
if(k.size()%2!=0){
	vector<int>minEqual;
	for(auto val : k){
		int ops =0;
		int temp=val;
		while(temp%2!=0){
			temp=floor(temp/2);
			ops++;
		}
		minEqual.push_back(ops);

	}
	oddMin = *min_element(all(minEqual));

	int evenMin = INT_MAX;

	if(even.size()>0){
		vector<int> evenEqual;
		for(auto val : even){
			int ops =0;
			int temp=val;
			while(temp%2==0){
				temp = floor(temp/2);
				ops++;
			}
			evenEqual.push_back(ops);

		}
		evenMin = *min_element(all(evenEqual));
	}
	cout<<min(oddMin,evenMin)<<endl;
}

else{
	cout<<0<<endl;
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

//Input
// 4
// 4
// 1 1 1 1
// 2
// 7 4
// 3
// 1 2 4
// 1
// 15
// Output--
// 0
// 2
// 1
// 4
