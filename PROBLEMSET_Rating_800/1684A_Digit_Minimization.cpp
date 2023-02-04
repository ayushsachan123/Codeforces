#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
    cin>>a;
    int d=a;
    int count=0;
while(a!=0){
    a=a/10;
    count++;
}
if(count==2){
    int b=d%10;
    cout<<b<<endl;
}
else{
    int m=10;
    while(d!=0){
         m=min(m,d%10);
        
         d=d/10;
    }
    cout<<m<<endl;
}
}
    return 0;
}

//Input--
// 3
// 12
// 132
// 487456398
// Output--
// 2
// 1
// 3
