#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
if(a%2!=0){
    cout<<-1<<endl;
}
else{
    cout<<0<<" "<<0<<" "<<a/2<<endl;
}
}
    return 0;
}

//Input--
// 5
// 4
// 1
// 12
// 2046
// 194723326
// Output--
// 3 3 1
// -1
// 2 4 6
// 69 420 666
// 12345678 87654321 100000000
