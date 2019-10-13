/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
# define n 15
bool is_safe(int board[n][n],int r,int c)
{
	int i,j; //queens are already placed till c-1 columns.
	for(i=0;i<c;i++)
		if(board[r][i])
			return false;
	for(i=r,j=c;i>=0 && j>=0 ;i--,j--)
		if(board[i][j])
			return false;
	for(i=r,j=c;i<n&&j>=0;i++,j--)
		if(board[i][j])
			return false;
	return true;
}

bool nq(int board[n][n], int c)
{
	if(c>=n) return true;
	int i;
	for(i=0;i<n;i++)
	{
		if(is_safe(board,i,c))
		{
			board[i][c]=1;
			if(nq(board,c+1)==true)
				return true;
			board[i][c]=0;
		}
	}
	return false;
}


int main()
{
	// cin>>n;
	int i,j,board[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			board[i][j]=0;
	if(nq(board,0)==false)
		cout<<"NO solution"<<endl;
	else
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(board[i][j]==0)
					cout<<" _ ";
				else cout<<" q ";
			}
			cout<<endl;
		}
	}
	return 0;
}
