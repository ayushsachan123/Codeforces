#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
   char  v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int s = 0, e = n - 1;
    // cout<<v[s] <<" "<<v[e]<<endl;
    int count = 0;
    while (s < e)
    {
        
        if (v[s] == '0' && v[e] == '1')
        {
            count+=2;
        }
        else if (v[s] == '1' && v[e] == '0')
        {
            count+=2;
        }
        else{
            break;
        }
        s++;
        e--;
    }
    int ans = n - count;
    cout <<ans<< endl;
}

int main(){
int t;
cin>>t;
while(t-->0){
solve();
}
    return 0;
}