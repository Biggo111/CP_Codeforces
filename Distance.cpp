#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

void solve()
{
    int x,y;
    cin>>x>>y;
    int c = x+y;
    int c2 = c/2;
    if(c%2!=0)
    {
        cout<<-1<<" "<<-1<<endl;
    }
    else
    {
        int k = x/2;
        int k2 = y/2;
        if(x%2!=0)
        {
            k++;
        }
        cout<<k<<" "<<k2<<endl;
    }
}
int main()
{
    biggo;

    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
