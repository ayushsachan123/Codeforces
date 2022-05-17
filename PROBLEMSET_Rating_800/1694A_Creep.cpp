#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a,b;
cin>>t;
while(t-->0){
cin>>a>>b;
string s;
while(a>0 &&b>0){
    s+="01";
    a--;
    b--;
}
while(a>0){
    s+="0";
    a--;
}
while(b>0){
    s+="1";
    b--;
}
cout<<s<<endl;
}

    return 0;
}

//Input--
// 5
// 1 1
// 1 2
// 5 2
// 4 5
// 3 7
// Output--
// 10
// 011
// 0011000
// 101010101
// 0001111111
