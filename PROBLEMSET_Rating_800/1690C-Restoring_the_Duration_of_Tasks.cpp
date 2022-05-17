#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
int arr1[a];
int arr2[a];
for(int i=0;i<a;i++){
    cin>>arr1[i];
}
for(int i=0;i<a;i++){
    cin>>arr2[i];
}
for(int i=0;i<a;i++){
    if(i>0 && arr1[i] >=arr2[i-1]){
        cout<<arr2[i]-arr1[i]<<" ";
    }
    else if(i>0 && arr1[i] <arr2[i-1]){
        cout<<arr2[i]-arr2[i-1]<<" ";
    }
    else if(i==0){
        cout<<arr2[i]-arr1[i]<<" ";
    }
}
cout<<endl;
}
    return 0;
}

//Input--
// 4
// 3
// 0 3 7
// 2 10 11
// 2
// 10 15
// 11 16
// 9
// 12 16 90 195 1456 1569 3001 5237 19275
// 13 199 200 260 9100 10000 10914 91066 5735533
// 1
// 0
// 1000000000
// Output--
// 2 7 1 
// 1 1 
// 1 183 1 60 7644 900 914 80152 5644467 
// 1000000000 
