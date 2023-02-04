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
sort(arr,arr+a);
int b=arr[0];
int sum=0;
for(int i=1;i<a;i++){
sum+=arr[i]-b;
}
cout<<sum<<endl;
}
    return 0;
}

//Input--
// 5
// 5
// 1 2 3 4 5
// 6
// 1000 1000 5 1000 1000 1000
// 10
// 1 2 3 5 1 2 7 9 13 5
// 3
// 8 8 8
// 1
// 10000000
// Output--
// 10
// 4975
// 38
// 0
// 0
