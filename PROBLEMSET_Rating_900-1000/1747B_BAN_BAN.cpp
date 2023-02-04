#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
vector<int>v;
if(a==1){
    cout<<1<<endl;
    cout<<1<<" "<<2<<endl;
}
int s=1, e=a*3;
if(a>1){
    cout<<ceil(a/2.0)<<endl;
while(s<e){
cout<<s<<" "<<e<<endl;
s+=3;
e-=3;
}
}
}
    return 0;
}

//Input--
// 2
// 1
// 2
// Output--
// 1
// 1 2
// 1
// 2 6
