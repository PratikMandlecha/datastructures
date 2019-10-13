/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
int find_peak(int *a,int l,int h,int n)
{
	int m = l+(h-l)/2;
	if((m==0 || a[m-1]<=a[m]) && (m==n-1 || a[m+1]<=a[m]))
		return m;
	else if(m>0 && a[m-1]>a[m])
		return find_peak(a,l,m-1,n);
	else
		return find_peak(a,m+1,h,n);
}
int main()
{
	int i,n,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<a[find_peak(a,0,n-1,n)]<<endl;

	// Below is priority queue method.
	// priority_queue <int> q;
	// for(i=0;i<n;i++)
	// {
	// 	cin>>k;
	// 	q.push(k);
	// }
	// cout<<q.top()<<endl;
	return 0;
}
