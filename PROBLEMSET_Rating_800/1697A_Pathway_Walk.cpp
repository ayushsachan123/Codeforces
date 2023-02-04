#include<bits/stdc++.h>
using namespace std;

int main(){
long long t;
cin>>t;
while(t-->0){
long long a,b;
cin>>a>>b;
long long arr[a];
for(int i=0;i<a;i++){
    cin>>arr[i];
}
long long sum=0;
for(int i=0;i<a;i++){
    sum+=arr[i];
}
if(sum>=b){
cout<<(sum-b)<<endl;
}
else{
    cout<<0<<endl;
}

}
    return 0;
}

//Input--
// 3
// 3 1
// 1 2 1
// 4 5
// 3 3 5 2
// 5 16
// 1 2 3 4 5
// Output--
// 3
// 8
// 0
