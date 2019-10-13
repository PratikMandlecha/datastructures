/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,a[n];
	cin>>a[0];
	int m=a[0],c=a[0],s=0,e=0;
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		c=max(a[i],c+a[i]); // current max -> max including the current element.
		if(c<0) s=i+1;
		if(c>m)
		{
			m=c;
			e=i;
		}
	}
	cout<<"Max contiguous sum = "<<m<<"\nThe elements are -> ";
	for(i=s;i<=e;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
