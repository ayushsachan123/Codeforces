#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t-->0){
    long long a,b;
cin>>a;
vector<long long>v1(a);
for(int i=0;i<a;i++){
    long long d;
    cin>>d;
    v1[i]=d;
}

cin>>b;
vector<long long>v2(b);

for(int i=0;i<b;i++){
    long long d;
    cin>>d;
    v2[i]=d;
}

long long top=0;
for(int i=0;i<b;i++){
 top=top+v2[i];
 if(top>a-1){
    top=top-a;
 }   
}
cout<<v1[top]<<endl;
}
    return 0;
}

//Input--
// 3
// 2
// 1 2
// 3
// 1 1 1
// 4
// 3 1 4 2
// 2
// 3 1
// 5
// 2 1 5 4 3
// 5
// 3 2 1 2 1
// Output--
// 2
// 3
// 3
