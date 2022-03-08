#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        int ans = a*n;
        if(b<=0)
        {
            int c=0,x=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='0')
                {
                    while(s[i]=='0' && i<n)
                    {
                        i++;
                        x++;
                    }
                    c++;
                }
            }
            if(x!=n)c++;
            int c2=0;
            x=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    while(s[i]=='1' && i<n)
                    {
                        i++;
                        x++;
                    }
                    c2++;
                }
            }
            if(x!=n)c2++;
            int c3 = min(c,c2);
            ans+=b*c3;
        }
        else
        {
            ans+=b*n;
        }
        cout<<ans<<endl;
    }
}
