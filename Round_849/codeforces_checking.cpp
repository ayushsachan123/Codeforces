#include<bits/stdc++.h>
#define int long long

using namespace std;

void solve(){
    char a;
    cin>>a;
    if(a=='c' || a=='o' || a=='d' || a=='e' || a=='f' || a=='o' || a=='r' || a=='c' || a=='e' || a=='s'){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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