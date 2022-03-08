#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c1=0,c2=0;
		for(int i=0;i<s.size();i++)
		{
			if(i==s.size()-1)
			{
				break;
			}
			if(s[i]=='a' && s[i+1]=='b')
			{
				c1++;
			}
			else if(s[i]=='b' && s[i+1]=='a')
			{
				c2++;
			}
		}
		if(c1==c2)cout<<s<<endl;
		else
        {
            if(c1>c2)
            {
                s[0]='b';
            }
            else
            {
                s[0] = 'a';
            }
            cout<<s<<endl;
        }
	}
}
