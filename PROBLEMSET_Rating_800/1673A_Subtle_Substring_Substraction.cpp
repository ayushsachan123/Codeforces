#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int x;
        int l = a.size();
        if(l == 1){
            cout<<"Bob ";
            x = a[0] - 'a' + 1;
            cout<<x;
        }
        else{
            cout<<"Alice ";
            int sum = 0, i;
            if(l&1){
                if(a[0] >= a[l-1]){
                    for(i = 0; i < l-1; i++){
                        sum = sum + a[i] - 'a' + 1;
                    }
                    sum = sum - a[l-1] + 'a' - 1;
                }
                else{
                    for(i = 1; i < l; i++){
                        sum = sum + a[i] - 'a' + 1;
                    }
                    sum = sum - a[0] + 'a' - 1;
                }
            }
            else{
                for(i = 0; i < l; i++){
                    sum = sum + a[i] - 'a' + 1;
                }
 
            }
            cout<<sum;
        }
        cout<<endl;
    }
}

//Input--
// 5
// aba
// abc
// cba
// n
// codeforces
// Output--
// Alice 2
// Alice 4
// Alice 4
// Bob 14
// Alice 93
