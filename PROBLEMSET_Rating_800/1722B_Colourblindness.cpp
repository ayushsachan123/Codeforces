#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
    cin>>a;
string s1;
string s2;
cin>>s1>>s2;
int count=0;
int sum=0;
for(int i=0;i<a;i++){
    if(s1[i]=='R' && s2[i]=='R'){
     count++;
    }
    else if(s1[i]=='G' && s2[i]=='G' || s1[i]=='B' && s2[i]=='B' || s1[i]=='G' && s2[i]=='B' ||s1[i]=='B' && s2[i]=='G'){
        sum++;
    }
}

int b=sum+count;
if(b==a){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
    return 0;
}

//Input--
// 6
// 2
// RG
// RB
// 4
// GRBG
// GBGB
// 5
// GGGGG
// BBBBB
// 7
// BBBBBBB
// RRRRRRR
// 8
// RGBRRGBR
// RGGRRBGR
// 1
// G
// G
// Output--
// YES
// NO
// YES
// NO
// YES
// YES
