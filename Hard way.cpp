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
        int x1,y1,x2,y2,x3,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        if(y1==y2 && y3<=y1)
        {
            cout<<abs(x2-x1)<<endl;
            continue;
        }
        if(y1==y3 && y2<=y1)
        {
            cout<<abs(x3-x1)<<endl;
            continue;
        }
        if(y2==y3 && y1<=y2)
        {
            cout<<abs(x3-x2)<<endl;
            continue;
        }
        else cout<<0<<endl;
    }
}
