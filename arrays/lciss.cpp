/* ~created by Pratik~ */


// Hash , unordered map.
// Time Complexity : O(n)  
// Auxiliary Space : O(n)
#include<bits/stdc++.h>
using namespace std;

void lciss(int a[], int n)
{
	unordered_map<int,int> mp;
	int i,dp[n+1],m=0,index;
	memset(dp,0,sizeof(dp));
	for(i=1;i<=n;i++)
	{
		if(mp.find(a[i]-1)!=mp.end())
		{
			int ind = mp[a[i]-1];
			int val=dp[ind]+1;
			dp[i]=val;
			if(m<=val)
			{
				m = val;
				index = i; //Index of largest value in LCISS.
			}
		}
		else
		{
			dp[i]=1;
			if(m==0)
			{
				m=1;
				index = i;
			}
		}
		mp[a[i]]=i;
	}

	cout<<"Length of Longest consecutive increasing subsequence is : "<<m<<endl;
	// printing values in LCISS .
	cout<<"Values are :";
	int max = a[index];
	for(i=max-m+1;i<=max;i++)
		cout<<i<<" ";
	cout<<endl;
}
int main()
{
	int i,n;
	cin>>n;
	int a[n+1];
	for(i=1;i<=n;i++)
		cin>>a[i];
	lciss(a,n);
	return 0;
}
