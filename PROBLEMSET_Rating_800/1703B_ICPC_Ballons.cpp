#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
char s[a];
map<char,int>mpp;
for(int i=0;i<a;i++){
    cin>>s[i];
    mpp[s[i]]++;
}
int c= mpp.size();
int d=a-c;
cout<<(2*c+d)<<endl;
}
    return 0;
}

//Input--
// 6
// 3
// ABA
// 1
// A
// 3
// ORZ
// 5
// BAAAA
// 4
// BKPT
// 10
// CODEFORCES
// Output--
// 5
// 2
// 6
// 7
// 8
// 17
