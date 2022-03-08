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
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        int x = n/2;
        int y = x+1;
        if(b<x || a>y)
        {
            cout<<-1<<endl;
        }
        else if(a==y && b!=x)cout<<-1<<endl;
        else if(b==x && a!=y)cout<<-1<<endl;
        else
        {
            cout<<a<<" ";
            for(int i=y;i<=n;i++)
            {
                if(i==b || i==a)continue;
                cout<<i<<" ";
            }
            cout<<b<<" ";
            for(int i=1;i<=x;i++)
            {
                if(i==a || i==b)continue;
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
