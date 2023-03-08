#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    char ch;
    string s;
    cin>>n>>ch;
    cin>>s;
    if(ch=='g'){
        cout<<0<<endl;
    }
    else{
        int first = -1;
        int ans =0;
        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                first = i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]==ch){
                int count = 0,flag=0;
                for(int j=i+1;j<n;j++){
                    count++;
                    if(s[j]=='g'){
                        flag++;
                        break;
                    }
                }
                i=i+count;
                if(flag){
                    ans = max(ans,count);
                }
                else{
                    ans = max(ans,count+1+first);
                }
            }
        }
        cout<<ans<<endl;
    }

}
int main(){
int t;
cin>>t;
while(t-->0){
solve();
}
    return 0;
}