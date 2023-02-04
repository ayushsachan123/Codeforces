#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
long long g=0,mx=0;
vector<long long>arr(a);
for(int i=0;i<a;i++){
    cin>>arr[i];
    g=__gcd(g,arr[i]);
}
mx=arr[a-1]/g;
cout<<mx<<endl;
}
    return 0;
}

//Input--
// 2
// 2
// 1 2
// 3
// 5 10 25
// Output--
// 2
// 5
