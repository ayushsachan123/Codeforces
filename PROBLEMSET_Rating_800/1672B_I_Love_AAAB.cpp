#include<bits/stdc++.h>
using namespace std;

using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int i, A = 0, B = 0;
  
        int flag=0;
        for(i = 0; i < a.size(); i++){
            if(a[i] == 'A') A++;
            if(a[i] == 'B') B++;
 
            if(B > A) { 
                flag=1;
                break;
            }
        }
 
        if(B < 1 || a[a.size()-1] =='A') 
        flag=1;
 
        if(flag) cout<<"NO";
        else cout<<"YES";
 
        cout<<endl;
    }
}

//Input--
// 4
// AABAB
// ABB
// AAAAAAAAB
// A
// Output--
// YES
// NO
// YES
// NO
