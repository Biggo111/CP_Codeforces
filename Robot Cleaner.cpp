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
        ll n,m,r1,c1,r2,c2;
        cin>>n>>m>>r1>>c1>>r2>>c2; //10 10 6 1 2 8
        ll step=0;
        ll a=0,b=0;
        while(r1!=r2 && c1!=c2)
        {
            if(r1==n)
            {
                a = 1;
            }
            if(r1==0)a=0;
            if(a==1)
            {
                r1--;
            }
            else r1++;
            if(c1==m)
            {
                b=1;
            }
            if(c1==0)b=0;
            if(b==1)c1--;
            else c1++;
            step++;
        }
        cout<<step<<endl;
    }
}
