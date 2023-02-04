#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a,b;
cin>>t;
while(t-->0){
cin>>a>>b;
string s1;
string s2;
cin>>s1>>s2;
if(b>a){
    cout<<"NO"<<endl;
}
else{
reverse(s1.begin(),s1.end());
reverse(s2.begin(),s2.end());

int flag=1;
for(int i=0;i<b-1;i++){
    if(s1[i]!=s2[i]){
        flag=0;
    }
}
if(flag){
    char c=s2[b-1];
    int fnd=0;
    for(int i=b-1;i<a;i++){
         if(s1[i]==c)
         fnd=1;
    }
    if(!fnd)
    flag=0;
}
if(flag)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}
    return 0;
}

//Input--
// 10
// 6 2
// 001001
// 11
// 6 2
// 110111
// 01
// 6 2
// 000001
// 11
// 6 2
// 111111
// 01
// 8 5
// 10000101
// 11010
// 7 4
// 1010001
// 1001
// 8 6
// 01010010
// 010010
// 8 4
// 01010101
// 1001
// 8 4
// 10101010
// 0110
// 7 5
// 1011100
// 11100
// Output--
// YES
// YES
// NO
// NO
// NO
// YES
// YES
// NO
// NO
// YES
