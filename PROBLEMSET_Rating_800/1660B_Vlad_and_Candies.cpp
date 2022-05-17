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

if(a==1){
    if(arr[0]<=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

else {
if(arr[a-1]-arr[a-2]>1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
}
    return 0;
}

//Input--
// 6
// 2
// 2 3
// 1
// 2
// 5
// 1 6 2 4 3
// 4
// 2 2 2 1
// 3
// 1 1000000000 999999999
// 1
// 1
// Output--
// YES
// NO
// NO
// YES
// YES
// YES
