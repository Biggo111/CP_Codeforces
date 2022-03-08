#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    biggo;
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll a,b;
        cin>>a>>b;
        ll k = a * b;
        if(b==1)cout<<"NO"<<endl;
        else
        {
        cout<<"YES"<<endl;
        cout<<a<<" "<<k<<" "<<a+k<<endl;
        }
    }
}
