#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a = n%6;
    if(n<6){
    cout<<15<<endl;
     return;
    }
    if(a==0 && n>=6){
        int ans = n/6;
        cout<<ans*15<<endl;
    }
   else if(a == 1 || a==2){
    int b = (n/6)-1;
     b*=15;
     b+=20;
     cout<<b<<endl;
   }
   else if(a==3 || a==4){
     int b = (n / 6) - 1;
     b *= 15;
     b+=25;
     cout<<b<<endl;
   }
   else{
    int b = (n/6)+1;
    cout<<b*15<<endl;
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