#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        string s1;
        string s2;
        cin>>s1>>s2;
        int a=s1.size();
        int b=s2.size();
       
        int c= min(a,b);

        if(s1[a-1]=='S' && s2[b-1]=='S'){
          if(a>b){
            cout<<"<"<<endl;
          }
          else if(b>a){
            cout<<">"<<endl;
          }
          else if(b==a){
            cout<<"="<<endl;
          }
        }
        else if(s1[a-1]=='L' && s2[b-1]=='L'){
          if(a>b){
            cout<<">"<<endl;
          }
          else if(b>a){
            cout<<"<"<<endl;
          }
          else if(b==a){
            cout<<"="<<endl;
          }
        }
        else if(s1[a-1]=='M' && s2[b-1]=='M'){
          if(a>b){
            cout<<"<"<<endl;
          }
          else if(b>a){
            cout<<">"<<endl;
          }
          else if(b==a){
            cout<<"="<<endl;
          }
        }
       else if(s1[a-1]=='L' && s2[b-1]=='S'){
            cout<<">"<<endl;
        }
       else if(s1[a-1]=='S' && s2[b-1]=='L'){
            cout<<"<"<<endl;
        }
       else if(s1[a-1]=='M' && s2[b-1]=='L'){
            cout<<"<"<<endl;
        }
       else if(s1[a-1]=='L' && s2[b-1]=='M'){
            cout<<">"<<endl;
        }
       else if(s1[a-1]=='S' && s2[b-1]=='M'){
            cout<<"<"<<endl;
        }
       else if(s1[a-1]=='M' && s2[b-1]=='S'){
            cout<<">"<<endl;
        }
      
    }

    return 0;
}

//Input--
// 6
// XXXS XS
// XXXL XL
// XL M
// XXL XXL
// XXXXXS M
// L M
// Output--
// <
// >
// >
// =
// <
// >
