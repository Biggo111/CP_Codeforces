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
        ll n,m,r,c;
        cin>>n>>m>>r>>c;
        char ch[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>ch[i][j];
            }
        }
        int cnt=0,cntW=0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(ch[i][j]!='W')
                {
                    cntW++;
                }
            }
        }
        if(cntW==0)
        {
            cout<<-1<<endl;
        }
        else if(ch[r-1][c-1]=='B')
        {
            cout<<0<<endl;
        }
        else
        {
            int k,f,cnt2=0,ans=2;

            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                    if(ch[r-1][j]=='B' || ch[i][c-1]=='B')
                    {
                        ans = 1;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
}
