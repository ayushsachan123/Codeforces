#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
int main() 
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--)
    {
              ll n,i,x=0,mx=0,sum=0;
              cin>>n;
              ll a[n];
              for(i=0;i<n;i++)
              {
                  cin>>a[i];
                  while(a[i]%2==0)
                  {
                      x++;
                      a[i]/=2;
                  }
                  mx=max(mx,a[i]);
                  sum+=a[i];
              }
              sum-=mx;
              cout<<sum+mx*(ll)pow(2,x)<<endl;    
       
    }
    return 0; 
} 

//Input--
// 5
// 3
// 6 4 2
// 5
// 1 2 3 4 5
// 1
// 10
// 3
// 2 3 4
// 15
// 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8
// Output--
// 50
// 46
// 10
// 26
// 35184372088846
