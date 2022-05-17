#include<iostream>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    if(m>1){
   long long a=(m-1)*n;
   cout<<a<<endl;
    }
    else if(m==1){
        long long b=n-1;
     cout<<b<<endl;
    }
}

//Input--
// 3 4
// Output--
// 9

// Input--
// 2 1
// Output--
// 1

