#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t-->0){
    char s[2][2];
map<char,int>mp;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin>>s[i][j];
        mp[s[i][j]]++;
    }
}
cout<<mp.size()-1<<endl;
}
    return 0;
}

//Input--
// 5
// rb
// br
// cc
// wb
// aa
// aa
// ab
// cd
// yy
// xx
// Output--
// 1
// 2
// 0
// 3
// 1
