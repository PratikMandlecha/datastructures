/* ~created by Pratik~ */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=s.length(),f=0;
	stack <char> c;
	for(int i=0;i<l;i++)
	{
		if(s[i] == '(' ||s[i] == '[' ||s[i] == '{')
		{
		//	cout<<"top "<<c.top()<<endl;
			c.push(s[i]);
		}
		if(c.empty())
		{
			f=1;
			break;
		}
		else
		{
			//cout<<"top "<<c.top()<<endl;
			if(s[i] == ')')
			{
				if(c.top()!='(')
				{
					f=1;
					break;
				}
				c.pop();
			}
			if(s[i] == '}')
			{
				if(c.top()!='{')
				{
					f=1;
					break;
				}
				c.pop();
			}
			if(s[i] == ']')
			{
				if(c.top()!='[')
				{
					f=1;
					break;
				}
				c.pop();
			}
		}
	}
	if(!c.empty() || f==1) 
		cout<<"Not Balanced"<<endl;
	else
		cout<<"Balanced"<<endl;
	return 0;
}
