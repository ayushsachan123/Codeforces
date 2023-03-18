#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
int x=0,y=0;
int n;
cin>>n;
char s[n];
for(int i=0;i<n;i++){
    cin>>s[i];
}
for(int i=0;i<n;i++){
    if(x==1 && y==1){
        break;
    }
    if(s[i]=='U'){
        y++;
      
    }
    else if(s[i]=='L'){
        x--;
      
    }
    else if(s[i]=='R'){
        x++;
       
    }
    else if(s[i]=='D'){
        y--;
     
    }
}

if(x==1 && y==1){
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