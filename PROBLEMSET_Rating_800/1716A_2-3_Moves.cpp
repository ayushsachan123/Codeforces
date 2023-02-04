#include <iostream>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    while(n-->0){
        cin>>a;
        int count=0;
        int sum=0;
        if(a==1){
            cout<<2<<endl;
        }
       else{
        int b=a/3;
        int c=a%3;
       if(c==0){
        cout<<b<<endl;
       }
       else{
        cout<<b+1<<endl;
       }
       }
}
}

//Input--
// 4
// 1
// 3
// 4
// 12
// Output--
// 2
// 1
// 2
// 4
