#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<string> v;
    unordered_map<string,int> mp;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(mp.find(s) == mp.end() ){
           v.push_back("OK");
        }
        else{
           string val = to_string(mp[s]);
           v.push_back(s+val);
        }

        mp[s]++;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
}

int main(){

solve();

    return 0;
}