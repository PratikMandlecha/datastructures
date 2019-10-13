/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int r;
void all_combi(int* data , int start, int end , int ind)
{
	int i;
	//cout<<"index : "<< ind<<endl;
	if(ind==r)
	{
		for(i=0;i<r;i++)
			cout<<data[i]<<" ";
		cout<<endl;
	}

	for(i=start ; i<=end && r-ind <= end-i+1 ; i++) // all remaining elemenst are sufficient to fill data matrix.
	{
		data[ind]=a[i];
		all_combi(data,i+1,end,ind+1);
	}
}
int main()
{
	int n;
	cin>>n;
	cin>>r;
	int data[r],i,k;
	for(i=0;i<n;i++)
	{
		cin>>k;
		a.push_back(k);
	}
	all_combi(data,0,n-1,0);
	return 0;
}
