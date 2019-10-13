/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
void updates(string s1, string s2)
{
	int k=s1.length(),l=s2.length();
	int i,j,a[k+1][l+1];
	for(i=0;i<=k;i++)
	{
		for(j=0;j<=l;j++)
		{
			if(i==0)
				a[i][j]=j;
			else if(j==0)
				a[i][j]=i;
			else if(s1[i-1]==s2[j-1])
				a[i][j]=a[i-1][j-1];
			else
			{
				a[i][j]= 1 + min(min(a[i-1][j],//delete
							a[i][j-1]) // insert i+1,j then last are same so i,j-1
						,a[i-1][j-1]); //replace.
			}
		}
	}
	cout<<"minimum number of changes = "<<a[k][l]<<endl;
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	updates(s1,s2);
	return 0;
}
