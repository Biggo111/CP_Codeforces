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
        int l,r,k;
        cin>>l>>r>>k;
        int odd,even;
        if(l==1 && r==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if(l==r)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(l&1 && r&1)
        {
            even = (r-l+1)/2;
            odd = even+1;
        }
        else if(!l&1 && !r&1)
        {
            odd = (r-l+1)/2;
            even = odd+1;
        }
        else
        {
            odd = (r-l+1)/2;
            even = (r-l+1)/2;
        }
        if(odd<=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
