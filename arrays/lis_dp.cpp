/* ~created by Pratik~ */
// Time complexity O(n^2)
/*
logic - dp[i] is the length of the LIS ending at index i such that a[i] is the last element of the LIS.

Printing LIS.
vector L such that L[i] is itself is a vector that stores LIS of arr that ends with arr[i]. 

For example, for array [3, 2, 6, 4, 5, 1],

L[0]: 3
L[1]: 2
L[2]: 2 6
L[3]: 2 4
L[4]: 2 4 5
L[5]: 1

*/
#include<bits/stdc++.h>
using namespace std;
int lis(int *a, int n)
{
	vector<vector<int> > L(n);
	int maxind,dp[n],i,j,m=0;
	for(i=0;i<n;i++)
		dp[i]=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j]&& dp[j]+1 > dp[i])
			{
				dp[i]=dp[j]+1;
				L[i]=L[j];
			}
		}
		L[i].push_back(a[i]);
		if(dp[i]>=m)
		{
			m=dp[i];
			maxind=i;
		}
	}
	cout<<"LIS is : ";
	for(i=0;i<L[maxind].size();i++)
	{
		cout<<L[maxind][i]<<" ";
	}
	cout<<endl;
	return m;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int val = lis(a,n);
	cout<<"LIS length : "<<val<<endl;
	return 0;
}
