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
int count=0;
for(int i=0;i<a;i++){
      count+=arr[i]-1;
   }
  
if(count%2!=0){
    cout<<"errorgorn"<<endl;
}
else{
    cout<<"maomao90"<<endl;
}
}
    return 0;
}

//Input--
// 2
// 4
// 2 4 2 1
// 1
// 1
// Output--
// errorgorn
// maomao90
