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
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')c1++;
            else c2++;
        }
        if((c1>0 && c2==0) || (c2>0 && c1==0) || (c1==0 && c2==0))cout<<-1<<" "<<-1<<endl;
        else
        {
            int a=0,b=0;
            for(ll i=0;i<n-1;i++)
            {
                if((s[i]=='a' && s[i+1]=='b') || (s[i]=='b' && s[i+1]=='a'))
                {
                    a = i+1;
                    b = (i+1)+1;
                    break;
                }
            }
            cout<<a<<" "<<b<<endl;
        }
    }
}
