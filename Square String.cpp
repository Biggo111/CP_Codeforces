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
        string s;
        cin>>s;
        ll k = s.size();
        if(k&1)cout<<"NO"<<endl;
        else
        {
            ll sz = k/2;
            string st="";
            for(int i=0;i<sz;i++)
            {
                st+=s[i];
            }
            int flag=0,j=0;
            for(int i=sz;i<k;i++,j++)
            {
                if(st[j]!=s[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
