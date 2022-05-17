#include<bits/stdc++.h>
using namespace std;

int main(){
long long t,a,b;
cin>>t;
while(t-->0){
cin>>a>>b;
long long ans=0;
long long temp=b;
ans=(b*(b+1))/2;
for(long long i=2;i<=a;i++){
    temp+=b;
    ans+=temp;
}
cout<<ans<<endl;
}
    return 0;
}

//Input--
// 7
// 1 1
// 2 3
// 3 2
// 7 1
// 1 10
// 5 5
// 10000 10000
// Output--
// 1
// 12
// 13
// 28
// 55
// 85
// 500099995000
