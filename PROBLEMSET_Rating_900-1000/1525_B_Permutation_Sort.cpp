#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t-->0){
int a;
cin>>a;
vector<int>v(a);

for(int i=0;i<a;i++){
    cin>>v[i];
}
int ans = 2;
if(is_sorted(v.begin(),v.end())){
    ans = 0;
    cout<<ans<<endl;
}

else if(v[0]==1 || v[a-1]==a){
    ans =1;
    cout<<ans<<endl;
}
else if(v[0]==a && v[a-1]==1){
    ans = 3;
    cout<<ans<<endl;
}
else{
    cout<<ans<<endl;
}
}
    return 0;
}