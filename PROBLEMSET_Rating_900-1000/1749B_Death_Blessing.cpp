#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
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
    int sum1=0,sum2=0;
    sort(arr2,arr2+a);
    int b=arr2[a-1];
    for(int i=0;i<a;i++){
        sum1+=arr1[i];
        sum2+=arr2[i];
    }
    int c= sum1+sum2-b;
    cout<<c<<endl;

}
    return 0;
}

//Input--
// 4
// 1
// 10
// 0
// 3
// 100 1 100
// 1 100 1
// 4
// 2 6 7 3
// 3 6 0 5
// 2
// 1000000000 1000000000
// 1000000000 1000000000
// Output--
// 10
// 203
// 26
// 3000000000
