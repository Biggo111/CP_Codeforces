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
        ll n,k;
        cin>>n;
        if(n==2 || n==4)
        {
            cout<<"YES"<<endl;
        }
        else if(n%2!=0 || n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int f = n/2;
            int f2 = n/4;
            if(f>=0)
            {
            double z = sqrt(f);
            double z2 = sqrt(f2);
            if(z==f*f || z2==f2*f2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            }
            else cout<<"NO"<<endl;
        }
    }
}
