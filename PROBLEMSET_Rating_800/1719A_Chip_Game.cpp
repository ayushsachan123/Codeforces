#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a,b;
cin>>t;
while(t-->0){
cin>>a>>b;
if((a+b)%2==0){
    cout<<"Tonya"<<endl;
}
else{
    cout<<"Burenka"<<endl;
}
}
    return 0;
}

//Input--
// 6
// 1 1
// 1 4
// 5 6
// 2 2
// 6 3
// 999999999 1000000000
// Output--
// Tonya
// Burenka
// Burenka
// Tonya
// Burenka
// Burenka
