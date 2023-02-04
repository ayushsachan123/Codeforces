#include<bits/stdc++.h>
using namespace std;

int main(){
 int t,n;
 cin>>t;
 while(t-->0){
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(is_sorted(v.begin(),v.end())){
          cout<<"0"<<endl;
          continue;
    }

    int s,e;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            s=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]==0){
            e=i;
            break;
        }
    }
int count=0;
while(s<e){
    if(v[s]==1 && v[e]==0){
        v[e]++;
        v[s]--;
        count++;
    }
    else if(v[s]==0){
        s++;
    }
    else if(v[e]==1){
      e--;
    }
}
cout<<count<<endl;
 }
    return 0;
}

//Input--
// 4
// 8
// 0 0 1 1 1 1 1 1
// 5
// 1 0 0 1 1
// 2
// 1 0
// 11
// 1 1 0 0 1 0 0 1 1 1 0
// Output--
// 0
// 1
// 1
// 3
