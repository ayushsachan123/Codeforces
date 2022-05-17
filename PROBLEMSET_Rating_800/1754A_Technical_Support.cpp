#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin>>n;
        string s;
        
        for(int i = 0; i < n; i++) {
            char ch;
            cin>>ch;
            s += ch;
        }
        int i = 0;
        while(i < n) {
            if(s[i] == 'Q') {
                bool flag = false;
                for(int j = i + 1; j < n; j++) {
                    if(s[j] == 'A') {
                        s[i] = '0', s[j] = '0';
                        flag = true;
                    }
                    if(flag) break;
                }
            }
            i++;
        }
        
      bool flag = true;
      
      for(int i = 0; i < n; i++) {
          if(s[i] == 'Q'){
              flag = false;
          }
      }
      
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }

    return 0;
}

//Input--
// 5
// 4
// QQAA
// 4
// QQAQ
// 3
// QAA
// 1
// Q
// 14
// QAQQAQAAQQQAAA
// Output--
// Yes
// No
// Yes
// No
// Yes
