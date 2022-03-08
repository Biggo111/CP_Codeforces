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
        ll n;
        cin>>n;
        ll v[n];
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll oddgcd=0,evengcd=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                evengcd=__gcd(evengcd,v[i]);
            }
            else
            {
                oddgcd=__gcd(oddgcd,v[i]);
            }
        }
        int flag=0,flag2=0;
        for(int i=1;i<n;i+=2)
        {
            if(v[i]%evengcd==0)
            {
                flag=1;
                break;
            }
        }
        for(int i=0;i<n;i+=2)
        {
            if(v[i]%oddgcd==0)
            {
                flag2=1;
                break;
            }
        }
        if(flag==1 && flag2==1)cout<<0<<endl;
        else if(flag==0)cout<<evengcd<<endl;
        else cout<<oddgcd<<endl;
    }
}
