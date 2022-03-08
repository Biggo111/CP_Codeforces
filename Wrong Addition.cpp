#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s,s2,s3="";
        cin>>s>>s2;
        int i,j;
        string ans="";
        ll flagg=0;
        ll n=s.size();
        ll m=s2.size();
        for(i=n-1,j=m-1; j>=0;j--)
        {
            if(i<0)
            {
                ans+=s2[j];
                continue;
            }
            int x,y;
            x = s[i--] - '0';
            y = s2[j] - '0';
            if(x<=y)
            {
                ans+=(y-x)+'0';
            }
            else
            {
                y+=10*(s2[--j]-'0');
                if(x<y && y>=10 && y<=19)
                {
                    ans+=(y-x)+'0';
                }
                else
                {
                    flagg = 1;
                    break;
                }
            }
        }
        if(i<0)
        {
            if(flagg)
            {
                cout<<-1<<endl;
                continue;
            }
            while(ans.back()=='0')
            {
                ans.pop_back();
            }
            reverse(ans.begin(),ans.end());
            cout<<ans<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
