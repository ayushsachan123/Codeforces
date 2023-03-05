// https://codeforces.com/problemset/problem/1521/A
#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
int t;
cin>>t;
while(t-->0){
int a,b;
cin>>a>>b;
int c = a*b;
int d = c/a;
int e = (d-1)*a;
int f = c-e;
if(f%a==0 && c%a==0 && e%a==0 && e!=f && e>0){
    cout<<"YES"<<endl<<e<<" "<<f<<" "<<c<<endl;
}
else if (f % a == 0 && c % a == 0 && e % a == 0 && e == f && e>0){
    cout << "YES" << endl<< e << " " << c << " " << 3*f << endl;
}
else if (f % a == 0 && c % a == 0 && e % a == 0 && e == f && e <= 0)
{
    cout << "YES" << endl<< c << " " << 2*c << " " << a+2*c << endl;
}
    else{
    cout<<"NO"<<endl;
}
}
    return 0;
}