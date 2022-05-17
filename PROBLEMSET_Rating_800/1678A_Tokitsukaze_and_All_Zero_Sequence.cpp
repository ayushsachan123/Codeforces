#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
cin>>a;
int count=0,zero=0;
map<int, int>mp;
for(int i=0;i<a;i++){
    int temp;
    cin>>temp;
    if(temp>0){
        count++;
         mp[temp]++;
    }
    else{
        zero++;
    }
}

if(zero){
cout<<count<<endl;
}
else if(count==mp.size()){
    cout<<count+1<<endl;
}

else{
    cout<<count<<endl;
}

}
    return 0;
}

//Input--
// 3
// 3
// 1 2 3
// 3
// 1 2 2
// 3
// 1 2 0
// Output--
// 4
// 3
// 2
