#include<bits/stdc++.h>
#define int long long int
using namespace std;

bool isSquare(int x){
    if(x>=0){
        int a = sqrt(x);
        return (x == a*a);
    }
   
   return false;
}

int32_t main(){
int t;
cin>>t;
while(t-->0){
int a;
cin>>a;
int b = a/2;
int c = a/4;
if(a%2!=0){
cout<<"NO"<<endl;
continue;
}

if(isSquare(b)){
    cout<<"YES"<<endl;
    continue;
}

if(a%4!=0){
    cout<<"NO"<<endl;
    continue;
}
if(isSquare(c)){
    cout<<"YES"<<endl;
    continue;
}
cout<<"NO"<<endl;
}
    return 0;
}