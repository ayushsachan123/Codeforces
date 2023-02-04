#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d,e,f,g;
    cin>>n;
    while(n-->0){
        cin>>a>>b>>c;
          d=b-c;
          if(d<0){
              d=d*(-1);
          }
          e=d+c;
        if(a==1 ){
            cout<<"1"<<endl;
        }
       
    if(a!=1 && a==e){
        cout<<"3"<<endl;
    }
    else if(a!=1 && a<e){
        cout<<"1"<<endl;
    }
    else if(a!=1 && a>e){
        cout<<"2"<<endl;
    }
    }

    return 0;
}

//Input--
// 3
// 1 2 3
// 3 1 2
// 3 2 1
// Output--
// 1
// 3
// 2
