#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    biggo;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        ll k = (abs(a-c)) + (abs(b-d));
        if(b==d && b==f)
        {
            if(e>=min(a,c)&&e<=max(a,c))
            {
                //cout<<k+2<<endl;
                k+=2;
            }
        }
        else if(a==c && a==e)
        {
            if(f>=min(b,d)&&f<=max(b,d))
            {
                //cout<<k+2<<endl;
                k+=2;
            }
        }
        cout<<k<<endl;
    }
}
