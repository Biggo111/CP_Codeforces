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
        if(s[0]=='R' || s[0]=='G' || s[0]=='B')cout<<"NO"<<endl;
        else
        {
            int rc=0,gc=0,bc=0,cnt=0;
            for(int i=0;i<6;i++)
            {
                if(s[i]=='r')rc++;
                if(s[i]=='R' && rc>0)cnt++;
                if(s[i]=='g')gc++;
                if(s[i]=='G' && gc>0)cnt++;
                if(s[i]=='b')bc++;
                if(s[i]=='B' && bc>0)cnt++;
            }
            if(cnt==3)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
