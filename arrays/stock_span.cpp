/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,c=1,k;
	int a[n];
	vector<int> ans;
	stack<int> s;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(s.empty())
		{
			s.push(0);
			ans.push_back(1);
		}
		else
		{
			if(a[s.top()]>a[i])
			{
				ans.push_back(1);
				s.push(i);
			}
			else
			{
				while((!s.empty()) && a[s.top()]<=a[i])
				{
					s.pop();
				}
				c=s.empty() ? i+1 : i-s.top();
				ans.push_back(c);
				s.push(i);
			}
		}
	}
	for(i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
