/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long int n;
	cin>>n;
	long long int i,a[n],c=0,k;
	for(i=0;i<n;i++)
	{
		cin>>k;
		a[i]=k*k;
	}
	sort(a,a+n);
	for(i=n-1;i>1;i--)
	{
		int l=0,r=i-1;
	//	cout<<a[l]<<a[r]<<a[i]<<endl;
		while(l<r)
		{
			if(a[l]+a[r]==a[i])
			{
				c++;
				break;
			}
			else
			{
				a[l]+a[r]>a[i] ? r-- : l++ ;
			}
		}
		if(c) break;
	}
	c>0 ? cout<<"Yes"<<endl : cout<<"No"<<endl;
	}
	return 0;
}
