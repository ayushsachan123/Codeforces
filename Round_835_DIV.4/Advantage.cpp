#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
            cin>>arr[i];
        }
        int arr1[a];
    for(int i=0;i<a;i++){
        arr1[i]=arr[i];
    }
    sort(arr1,arr1+a);
    int b=arr1[a-1];
    int c=arr1[a-2];
    for(int i=0;i<a;i++){
        if(arr[i]!=b){
            cout<<arr[i]-b<<" ";
        }
        else if(arr[i]==b){
            cout<<arr[i]-c<<" ";
        }
    }
    cout<<endl;
    }
}

//Input--
// 5
// 4
// 4 7 3 5
// 2
// 1 2
// 5
// 1 2 3 4 5
// 3
// 4 9 4
// 4
// 4 4 4 4
// Output--
// -3 2 -4 -2 
// -1 1 
// -4 -3 -2 -1 1 
// -5 5 -5 
// 0 0 0 0 
