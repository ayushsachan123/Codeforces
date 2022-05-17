#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
   
    for(int i=0;i<n;i++){
          cin>>b[i];
    }
  
    int ans=0;
    for(int i=0;i<n;i++){
         ans=max(ans,a[i]-b[i]);
    }
   

    for(int i=0;i<n;i++){
         a[i]=max(0,a[i]-ans);
    }
   for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
        cout<<"NO"<<endl;
        return;
    }
   }
  cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t-->0){
        solve();
    }
    return 0;
}

//Input--
// 6
// 4
// 3 5 4 1
// 1 3 2 0
// 3
// 1 2 1
// 0 1 0
// 4
// 5 3 7 2
// 1 1 1 1
// 5
// 1 2 3 4 5
// 1 2 3 4 6
// 1
// 8
// 0
// 1
// 4
// 6
// Output--
// YES
// YES
// NO
// NO
// YES
// NO
