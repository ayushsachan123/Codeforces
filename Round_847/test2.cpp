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
int n,s,r;
vi v;
vi an;
cin>>n>>s>>r;
int ex=1,temp=r;
    while(ex<7 && temp>=0){
        v.push_back(ex);
        ex++;
        temp-=ex;
    }
// cout<<"n is "<<n<<endl;
// cout<<"r is "<<r<<endl;
reverse(v.begin(),v.end());
int count=0,sum=0;
for(int i=0;i<v.size();i++){
   if(an.size()<n){
    an.push_back(v[i]);
   }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
// an.push_back(s-r);
// for(int i=0;i<an.size();i++){
//     cout<<an[i];
// }
// cout<<endl;
for(int i=0;i<an.size();i++){
    //  cout<<an[i]<<" ";
    sum+=an[i];
}	
//  sort(an.begin(),an.end());
 int rem = s-sum;
//cout<<"rem "<<rem<<endl;
int i=0;
while(rem!=0 && i<n && rem>=0){
        if(an[i]<6){
            int add = 6-an[i];
            if(add<rem){
              an[i]+=add;
              rem-=add;
            }
            else{
                an[i]+=rem;
                rem=0;
            }
        }
        i++;
}
int k=0;
while(an.size()<n){
  if(an[k]>0){
    an[k]--;
    an.push_back(1);
  } 
else{
    k++;
}
}
int sum1=0;
for(int i=0;i<an.size();i++){
    // cout<<an[i]<<" ";
sum1+=an[i];
}

int l=0;
int t =abs(s-sum1);
while(t>0){
if(abs(s-sum1)<an[l]){
    an[l]-=abs(s-sum1);
    t=0;
}
else{
    l++;
}
l++;
}
 sort(an.begin(),an.end());

for(int i=0;i<an.size()-1;i++){
    cout<<an[i]<<" ";
}
cout<<endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int t = 1;
        cin >> t;
	while (t--) solve();

	return 0;
}