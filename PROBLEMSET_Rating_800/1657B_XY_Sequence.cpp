#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t-->0){
long long int a,b,c,d;
cin>>a>>b>>c>>d;
vector<long long int>v={0}; 
v[0]=0;
for(long long int i=1;i<=a;i++){
long long int e = v[i-1] +c;
long long int f =v[i-1] -d;
if(e<=b){
    v.push_back(e);
}
else if(f<=b){
    v.push_back(f);
}
else{
    v.push_back(0);
}
}
long long int sum=0;
for(long long int i=0;i<v.size();i++){
    sum+=v[i];
}
cout<<sum<<endl;
}
    return 0;
}

//Input--
// 3
// 5 100 1 30
// 7 1000000000 1000000000 1000000000
// 4 1 7 3
// Output--
// 15
// 4000000000
// -10
