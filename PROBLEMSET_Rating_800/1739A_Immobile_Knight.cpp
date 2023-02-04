#include<bits/stdc++.h>

using namespace std;

int main(){
 int t,a,b;
 cin>>t;
 while(t-->0){
    cin>>a>>b;
    if(max(a,b)==3){
        if(min(a,b)==1){
          cout<<"1 1"<<endl;
        }
        else{
            cout<<"2 2"<<endl;
        }
    }
    else{
        cout<<"1 1"<<endl;
    }
 }
    return 0;
}

//Input--
// 3
// 1 7
// 8 8
// 3 3
// Output--
// 1 7
// 7 2
// 2 2
