/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,j,i,sum,ans=0;
		cin>>n;
		cin>>sum;
		long long int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n-2;i++)
		{
			int j=i+1,k=n-1;
			while(j<k)
			{
				if(a[i]+a[j]+a[k]>=sum)
					k--;
				else
				{
					ans+=(k-j);
					j++;
				}
			}
		}
		cout<<ans<<endl;
	}	
	return 0;
}
