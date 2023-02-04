#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a,b;
cin>>t;
while(t-->0){
cin>>a>>b;
vector<int>v(a);
for(int i=0;i<a;i++){
    cin>>v[i];
}
vector<int>v1=v;
sort(v1.begin(),v1.end());
set<int>s1;
for(int i=0;i<b;i++){
    s1.insert(v1[i]);
}
for(int i=0;i<b;i++){
    if(s1.find(v[i])!=s1.end())
    s1.erase(v[i]);
}
cout<<s1.size()<<endl;
}
    return 0;
}

//Input--
// 4
// 3 1
// 2 3 1
// 3 3
// 1 2 3
// 4 2
// 3 4 1 2
// 1 1
// 1
// Output--
// 1
// 0
// 2
// 0
