#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t-->0){
    int a;
    cin>>a;
    char s[a];
    for(int i=0;i<a;i++){
        cin>>s[i];
    }
     int max = s[0];
    for(int i=0;i<a;i++){
        if(s[i]>max)
         max=s[i];
    }
    cout<<max-96<<endl;
   }
}

//Input--
// 5
// 1
// a
// 4
// down
// 10
// codeforces
// 3
// bcf
// 5
// zzzzz
//Output--
// 1
// 23
// 19
// 6
// 26
