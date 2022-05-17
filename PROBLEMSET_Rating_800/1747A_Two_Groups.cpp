#include<bits/stdc++.h>

using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
    cin>>a;
int arr[a];
for(int i=0;i<a;i++){
cin>>arr[i];
}
long long sum=0;
for(int i=0;i<a;i++){
sum= sum + arr[i];
}
if(sum>=0){
    cout<<sum<<endl;
}
else{
cout<<(-1)*(sum)<<endl;
}
}
    return 0;
}

//Input--
// 4
// 2
// 10 -10
// 4
// -2 -1 11 0
// 3
// 2 3 2
// 5
// -9 2 0 0 -4
// Output--
// 0
// 8
// 7
// 11
