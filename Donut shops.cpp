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
        ll a,b,c,cnt=0,cnt2=0;
        cin>>a>>b>>c;
        if(a<c)cout<<1<<" ";
        else cout<<-1<<" ";
        if(a*b>c)cout<<b;
        else cout<<-1;
        cout<<endl;
    }
}
