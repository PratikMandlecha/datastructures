/* ~created by Pratik~ */
// Non consecutive maximum sum in a array.
// Time,space -> O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,r;
	cin>>t;
	r=t;
	while(t--)
	{
		long long int i,j;
		long long int n,m=0;
		cin>>n;
		long long int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=0;
		}
		b[0]=a[0];b[1]=a[1];
		/*if(n>1)
			m=max(b[0],b[1]);
		else m=b[0];
		*/
		for(i=2;i<n;i++)
		{
			for(j=0;j<i-1;j++)
			{
				if(b[i]<b[j]+a[i])
					b[i]=b[j]+a[i];
				//b[i]=max(b[i],(b[j]+a[i]));
			}
		}
		for(i=0;i<n;i++)
			if(m<b[i])
				m=b[i];
		cout<<"Case "<<r-t<<": "<<m<<endl;
	}
	return 0;
}
