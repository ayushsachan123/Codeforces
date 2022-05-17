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
int j=0;
int count=0;
while(j<a){
    if(arr[j]>arr[j+1]){
        count++;
        j=j+2;
    }
    else{
        j++;
    }
}
cout<<count<<endl;
}
    return 0;
}

//Input--
// 5
// 3
// 1 2 3
// 4
// 4 3 2 1
// 2
// 1 2
// 2
// 2 1
// 6
// 4 5 6 1 2 3
// Output--
// 0
// 2
// 0
// 1
// 1
