#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
int rem=a;
int arr[a];
map<int,int>m;
for(int i=0;i<a;i++){
    cin>>arr[i];
    m[arr[i]]++;
}
int i=0;
int count=0;
while(m.size()!=rem){
    count++;
    m[arr[i]]--;
  if(m[arr[i]]==0){
    m.erase(arr[i]);
  }
  i++;
  rem--;
}
cout<<count<<endl;
}
    return 0;
}

//Input--
// 5
// 4
// 3 1 4 3
// 5
// 1 1 1 1 1
// 1
// 1
// 6
// 6 5 4 3 2 1
// 7
// 1 2 1 7 1 2 1
// Output--
// 1
// 4
// 0
// 0
// 5
