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
        ll n,r;
        cin>>n>>r;
        char ch[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                ch[i][j] = '.';
            }
        }
        if(((2*r)-1)>n)
        {
            cout<<-1<<endl;
        }
        else
        {
            int i=0,j=0;
            while(r--)
            {
                ch[i][j] = 'R';
                i+=2;
                j+=2;
            }
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    cout<<ch[i][j];
                }
                cout<<endl;
            }
        }
    }
}
