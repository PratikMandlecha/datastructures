/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;

int cmp(string a , string b)
{
	return a+b>b+a;
}
void largestNumber(vector<int> &A) {
	vector<string> s;
	int i,j,n=A.size(),k=0;
	for(i=0;i<n;i++)
	{
		s.push_back(to_string(A[i]));
	}
	sort(s.begin(),s.end(),cmp);
	string ans="";
	for(i=0;i<n;i++)
	{
		ans.append(s[i]);
	}
	if(ans[0]=='0') cout<<"0";
	else 
		cout<<ans;
}

int main()
{
	int i,n;
	cin>>n;
	vector<int> a;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		a.push_back(a[i]);
	}
	largestNumber(a);
	return 0;
}
