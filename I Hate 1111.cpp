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
        int f=0;
        for(int i=n;i>=1;i-=11)
        {
            if(i%11==0 || i%111==0 || i%1111==0 || i%11111==0 || i%11111==0 || i%111111==0 || i%1111111==0 || i%11111111==0)
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
