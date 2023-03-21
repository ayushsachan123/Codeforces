#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a;
    cin>>a;
    vector<int>v(a);
    for(int i=0;i<a;i++){
        cin>>v[i];
    }
    int sum=0;
    for(int i=0;i<a;i++){
        sum+=v[i];
    }
    if(sum%a==0){
        cout<<a<<endl;
    }
    else{
        cout<<a-1<<endl;
    }
}

int main(){
solve();

    return 0;
}