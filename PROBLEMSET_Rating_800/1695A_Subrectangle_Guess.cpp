#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a,b;
cin>>t;
while(t-->0){
 int n,m;
    cin>>n>>m;
    int maxo=INT_MIN,x=0,y=0,temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>temp;
            if(temp>maxo){
                maxo=temp;
                x=i+1;
                y=j+1;
            }
        }
    }
    cout<<max(x,n-x+1)*max(y,m-y+1)<<endl;
}
    return 0;
}

// Input--
// 3
// 1 1
// 3
// 4 4
// 2 12 6 10
// 3 15 16 4
// 1 13 8 11
// 14 7 9 5
// 2 3
// -7 5 2
// 0 8 -3
// Output--
// 1
// 9
// 4
