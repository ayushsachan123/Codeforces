#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t-->0){
char c[2];
for(int i=0;i<2;i++){
    cin>>c[i];
}
int a=c[0]-'a';
int b=c[1]-'a';

if(a>b){
    cout<<a*25+b+1<<endl;
}
else{
    cout<<a*25+b<<endl;
}
}
    return 0;
}

//Input--
// 7
// ab
// ac
// az
// ba
// bc
// zx
// zy
// Output--
// 1
// 2
// 25
// 26
// 27
// 649
// 650
