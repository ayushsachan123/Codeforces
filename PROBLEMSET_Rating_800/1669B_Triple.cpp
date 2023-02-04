#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a;
cin>>t;
while(t-->0){
    cin>>a;
     int arr[a];
map<int, int>mp;
for(int i=0;i<a;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}
int b =mp.size();
int flag=0;
for(auto itr=mp.begin();itr!=mp.end();itr++){
    if(itr->second>2){
        cout<<itr->first<<endl;
        flag=1;
        break;
    }
}

 if(flag==0){
    cout<<"-1"<<endl;
}

}
    return 0;
}

//Input--
// 7
// 1
// 1
// 3
// 2 2 2
// 7
// 2 2 3 3 4 2 2
// 8
// 1 4 3 4 3 2 4 1
// 9
// 1 1 1 2 2 2 3 3 3
// 5
// 1 5 2 4 3
// 4
// 4 4 4 4
// Output--
// -1
// 2
// 2
// 4
// 3
// -1
// 4
