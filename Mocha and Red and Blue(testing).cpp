#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='?')c++;
    }
    if(n==1 && s[0]=='?')
    {
        cout<<"B"<<endl;
        return;
    }
    if(c==0)
    {
        cout<<s<<endl;
        return;
    }
    if(c==s.size())
    {
        for(int i=1; i<=n; i++)
        {
            if(i&1)
            {
                cout<<"R";
            }
            else
            {
                cout<<"B";
            }
            cout<<endl;
            return;
        }
    }
    int i=0;
    while(i<n)
    {
        if(s[i]=='?')
        {
            if(i-1>=0)
            {
                if(s[i-1]=='B')
                {
                    s[i] = 'R';
                }
                else if(s[i-1]=='R')
                {
                    s[i] = 'B';
                }
            }
        }
        i++;
    }
    i = n-1;
    while(i>=0)
    {
        if(s[i]=='?')
        {
            if(i+1<n)
            {
                if(s[i+1]=='B')
                {
                    s[i] = 'R';
                }
                else if(s[i+1]=='R')
                {
                    s[i] = 'B';
                }
            }
        }
        i--;
    }
    cout<<s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

