#include<bits/stdc++.h>

using namespace std;
int main(){
   int t,a,b,c;
   cin>>t;
   while(t-->0){
    cin>>a>>b>>c;
    int d=a+b;
    int e=a+c;
    int f=b+c;
    if(d==c || e==b || f==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
    return 0;
}

//Input--
// 7
// 1 4 3
// 2 5 8
// 9 11 20
// 0 0 0
// 20 20 20
// 4 12 3
// 15 7 8
// Output--
// YES
// NO
// YES
// YES
// NO
// NO
// YES
