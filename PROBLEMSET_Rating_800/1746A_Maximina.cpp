#include<bits/stdc++.h>

using namespace std;

int main(){
   int t,a,b;
   cin>>t;
   while(t-->0){
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    int count=0;
 for(int i=0;i<a;i++){
    if(arr[i]==1){
  count++;
    }
 }
 if(count){
    cout<<"YES"<<endl;
 }
 else{
   cout<<"NO"<<endl;
 }
   }
    return 0;
}

//Input--
// 7
// 3 2
// 0 1 0
// 5 3
// 1 0 1 1 0
// 2 2
// 1 1
// 4 4
// 0 0 0 0
// 6 3
// 0 0 1 0 0 1
// 7 5
// 1 1 1 1 1 1 1
// 5 3
// 0 0 1 0 0
// Output--
// YES
// YES
// YES
// NO
// YES
// YES
// YES
