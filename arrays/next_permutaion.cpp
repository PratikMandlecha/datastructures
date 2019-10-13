/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n,i,l=s.length();
	sort(s.begin(),s.end());
	cin>>n;
	//cout<<s;
	while(n--)
	{
		next_permutation(s.begin(),s.end());
	}
	cout<<s;
	return 0;
}
