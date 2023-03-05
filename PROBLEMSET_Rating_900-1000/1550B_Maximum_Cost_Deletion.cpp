#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
     string s;
      cin>>s;
  int zero=0;
  int one=0;
  
  for(auto x : s){
if(x==0) zero++;
else one++;
  }

if(b>=0 && c>=0){
    int ans1 = zero*b + c;
    int ans2 = one*b + c;
    cout<<ans1+ans2<<endl;
}
else if(b<=0 && c>=0){
int ans = b*1 + c;
cout<<ans*a<<endl;
}

else if(b>=0 && c<=0){

}
 
}

int main(){
int t;
cin>>t;
while(t-->0){
solve();
}
    return 0;
}