#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t-->0)
{
	int n,m,k;
	cin>>n>>m>>k;
	string a,b;
	cin>>a>>b;

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int i=0,j=0,p=0,q=0;

	string c="";
	while(i<n && j<m)
	{
		if((a[i]<b[j] && p<k) || q==k)
		{
			c+=a[i];
			 p++;i++;q=0;
		}
		else
		{
			c+=b[j];
			 q++; j++; p=0;
		}
	}
	cout<<c<<endl;
}
return 0;
}

//Input--
// 3
// 6 4 2
// aaaaaa
// bbbb
// 5 9 3
// caaca
// bedededeb
// 7 7 1
// noskill
// wxhtzdy
// Output--
// aabaabaa
// aaabbcc
// dihktlwlxnyoz
