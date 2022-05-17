#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
int d=a;
int b=1;
while(d!=0){
d=d/10;
b=b*10;
}
int c=b/10;
int e=a-c;
cout<<e<<endl;
}
    return 0;
}

// Input--
// 7
// 1
// 2
// 178
// 20
// 999999999
// 9000
// 987654321
// Output--
// 0
// 1
// 78
// 10
// 899999999
// 8000
// 887654321
