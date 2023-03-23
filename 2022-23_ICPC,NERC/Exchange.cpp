#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a,b,c;
cin>>t;
while(t-->0){
cin>>a>>b>>c;
if(c>=b){
    int d = ceil(a/(b));
    if(a%b==0){
        cout<<d<<endl;
    }
    else{
        cout<<d+1<<endl;
    }   
}
else if(c<b){
    cout<<1<<endl;
}

}
    return 0;
}

//Input--
// 4
// 100 25 30
// 9999997 25 50
// 52 50 48
// 49 50 1
// Output--
// 4
// 400000
// 1
// 1
