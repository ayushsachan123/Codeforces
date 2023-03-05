#include<bits/stdc++.h>
#define int long long int

using namespace std;

void solve(){
    int a;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    int res = v[0];
    for(int i=1;i<a;i++){
        res&=v[i];
    }
    cout<<res<<endl;
}


int32_t main(){
int t;
cin>>t;
while(t-->0){
solve();
}
    return 0;
}