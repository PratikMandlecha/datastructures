/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i;
	cin>>n>>k;
	int l=0,r=0,a[n],c=0,p;
	for(i=0;i<n;i++)
		cin>>a[i];
	p=1;
	for(l=0,r=0;r<n;r++)
	{
		p*=a[r];
		while(p>=k && l<r)
			p/=a[l++];
		if(p < k)
			c+=(1+(r-l));
	}
	cout<<c<<endl;
	return 0;
}
