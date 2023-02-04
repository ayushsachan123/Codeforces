#include<bits/stdc++.h>
using namespace std;

const int MAX = 200007;
const int MOD=1000000007;

int main(){
int t;
cin>>t;
while(t-->0){
    int n;
    cin>>n;
    map<string, int>mp;
    string a[3][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            mp[a[i][j]]++;
        }
    }

    for(int i=0;i<3;i++){
        int tot=0;
        for(int j=0;j<n;j++){
            if(mp[a[i][j]]==1){
                tot+=3;
            }
            else if(mp[a[i][j]]==2){
                tot++;
            }
        }
        cout<<tot<<" ";
    }
    cout<<endl;
}
}

//Input--
// 3
// 1
// abc
// def
// abc
// 3
// orz for qaq
// qaq orz for
// cod for ces
// 5
// iat roc hem ica lly
// bac ter iol ogi sts
// bac roc lly iol iat
// Output--
// 1 3 1 
// 2 2 6 
// 9 11 5 
