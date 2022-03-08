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
        ll n,c=0,c2=0;
        cin>>n;
        while(1)
        {
            if(n==1)
            {
                cout<<c<<endl;
                break;
            }
            else if(n<0)
            {
                cout<<-1<<endl;
                break;
            }
            if(n%6==0)
            {
                n/=6;
                c++;
            }
            else
            {
                n*=2;
                c++;
            }
        }
    }
}
