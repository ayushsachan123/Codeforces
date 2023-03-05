#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int prefix[300002];

    for(int i=1;i<=300000;++i){
       prefix[i]=(prefix[i-1]^i);
    }
 
  int x = prefix[a-1];
//   cout<<x<<endl;

    if(x==b){
        cout<<a<<endl;
    }
    else if((x^b)!=a){
        cout<<a+1<<endl;
    }
    else if((x^b)==a){
        cout<<a+2<<endl;
    }
}

int32_t main(){
int t;
cin>>t;
while(t-->0){
solve();
}
    return 0;
}