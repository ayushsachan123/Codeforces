#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
vector<int>arr;
for(int i=0;i<a;i++){
    int k;
    cin>>k;
    arr.push_back(k);
}

for(int i=0;i<a;i++){
    int b;
    string s;
     cin>>b;
    cin>>s;
    for(int j=0;j<b;j++){
        if(s[j]=='U'){
            if(arr[i]==0)
                arr[i]=9;
            else
            arr[i]--;
        }
        else if(s[j]=='D'){
            if(arr[i]==9)
            arr[i]=0;
            else
            arr[i]++;
        }
    }
}
for(auto &itr:arr){
    cout<<itr<<" ";
}
cout<<endl;
}
    return 0;
}

//Input--
// 3
// 3
// 9 3 1
// 3 DDD
// 4 UDUU
// 2 DU
// 2
// 0 9
// 9 DDDDDDDDD
// 9 UUUUUUUUU
// 5
// 0 5 9 8 3
// 10 UUUUUUUUUU
// 3 UUD
// 8 UUDUUDDD
// 10 UUDUUDUDDU
// 4 UUUU
// Output--
// 2 1 1 
// 9 0 
// 0 4 9 6 9 
