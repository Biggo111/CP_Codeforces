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
        int n,c0,c1,h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')a++;
            else b++;
        }
        int ans = a*min(c0,c1+h) + b*min(c1,c0+h);
        cout<<ans<<endl;
    }
}
