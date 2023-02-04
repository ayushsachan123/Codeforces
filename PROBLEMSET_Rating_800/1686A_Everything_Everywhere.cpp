#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<double> v(n);
        for(int i = 0; i < n; i++) {double x; cin>>x; v[i] = x;}
        if(n== 1){
            cout<<"YES"<<endl;
            continue;
        }
        
        bool flag = false;
        for(int i= 0; i < n; i++){
            double sum = 0;
            for(int j = 0; j < n ;j++){
                if(i == j) continue;
                sum += v[j];
            }
            
            if(sum / (n - 1) == v[i]){
                flag = true; break;
            }
        }
        
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
        
    }
 
    return 0;
}

// Input--
// 4
// 3
// 42 42 42
// 5
// 1 2 3 4 5
// 4
// 4 3 2 1
// 3
// 24 2 22
// Output--
// YES
// YES
// NO
// NO
