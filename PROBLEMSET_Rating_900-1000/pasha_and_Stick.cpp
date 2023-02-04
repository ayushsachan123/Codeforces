#include<bits/stdc++.h>
#define int long long int
using namespace std;

void solve(){
int a;
cin>>a;
int b = a/2;
 int c =b/2;
 if(a%2!=0){
    cout<<0<<endl;
 }
else if(a<2){
    cout<<0<<endl;
 }
else if(b%2==0 && a>1){
   
    cout<<c-1<<endl;
}
else{
    cout<<c<<endl;
}
}

int32_t main(){

solve();
    return 0;
}