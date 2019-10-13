/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;

bool issafe(int x,int y,int sol[8][8])
{
	if(x>=0 && x<8 && y>=0 && y<8 && sol[x][y]==-1)
		return true;
	else return false;
}

bool kt(int x,int y,int mov,int xm[8],int ym[8],int sol[8][8])
{
	if(mov==64) return true;
	int i,j,xn,yn;
	for(i=0;i<8;i++)
	{
		xn=x+xm[i];
		yn=y+ym[i];
		if(issafe(xn,yn,sol))
		{
			// cout<<xn<<" "<<yn<<" "<<mov<<endl;
			sol[xn][yn]=mov;
			if(kt(xn,yn,mov+1,xm,ym,sol)==true)
				return true;
			else sol[xn][yn]=-1;
		}
	}
	return false;
}

int main()
{
	int x,y,i,j;
	cin>>x>>y;
	int sol[8][8];
	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
			sol[i][j]=-1;
	sol[x][y]=0;
	int xm[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };  // NOT getting answer with other order.
	int ym[8] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 
	int mov=1;
	if(kt(x,y,mov,xm,ym,sol) == false)
		cout<<"NO solution exists \n";
	else
	{
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				printf(" %2d ", sol[i][j]);
			}
			cout<<endl;
		}
	}
	return 0;
}
