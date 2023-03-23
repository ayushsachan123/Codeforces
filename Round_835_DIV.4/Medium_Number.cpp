#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c;
        cin>>a>>b>>c;
        int d=max(a,b);
        int e=max(d,c);
        int f=min(a,b);
        int g=min(f,c);
     if(a!=e && a!=g)
     {
        cout<<a<<endl;
     }
     else if(b!=e && b!=g){
           cout<<b<<endl;
     }
     else{
        cout<<c<<endl;
     }
    }
}

//Input--
// 9
// 5 2 6
// 14 3 4
// 20 2 1
// 1 2 3
// 11 19 12
// 10 8 20
// 6 20 3
// 4 1 3
// 19 8 4
// Output--
// 5
// 4
// 2
// 2
// 12
// 10
// 6
// 3
// 8
