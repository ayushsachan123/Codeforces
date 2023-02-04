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
int s=0,e=a-1;
while(s<e){
    if(arr[s]>0 && arr[e]<0){
        arr[s]=(-1)*arr[s];
        arr[e]=(-1)*arr[e];
        s++;
        e--;
    }
    else if(arr[s]<0 && arr[e]>0){
        s++;
        e--;
    }
    else if(arr[s]<0 && arr[e]<0){
        s++;
    }
    else if(arr[s]>0 && arr[e]>0){
        e--;
    }
}
int count=0;
for(int i=0;i<a-1;i++){
    if(arr[i]<=arr[i+1]){
       count++; 
    }
    else{
        break;
    }
}
if(count==a-1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
    return 0;
}

//Input--
// 4
// 7
// 7 3 2 -11 -13 -17 -23
// 6
// 4 10 25 47 71 96
// 6
// 71 -35 7 -4 -11 -25
// 6
// -45 9 -48 -67 -55 7
// Output--
// NO
// YES
// YES
// NO
