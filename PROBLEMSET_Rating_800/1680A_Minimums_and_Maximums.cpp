#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t-->0){
 int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l2>r1 || l1>r2){
        cout<<l2+l1<<endl;
    }
    else{
        cout<<max({l1,l2})<<endl;
    }

}
    return 0;
}

//Input--
// 7
// 3 5 4 6
// 5 8 5 5
// 3 3 10 12
// 1 5 3 3
// 1 1 2 2
// 2 2 1 1
// 6 6 6 6
// Output--
// 4
// 5
// 13
// 3
// 3
// 3
// 6
