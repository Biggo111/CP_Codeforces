#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c')cnt++;
    }
    while(q--)
    {
        int a;
        char b;
        cin>>a>>b;
        a--;
        int z=a-2;
        if(a-2<0)z=0;
        for(int i=z;i<=a;i++)
        {
            string k;
            k+=s[i];
            k+=s[i+1];
            k+=s[i+2];
            if(k=="abc")cnt--;
        }
        s[a]=b;
        for(int i=z;i<=a;i++)
        {
            string k;
            k+=s[i];
            k+=s[i+1];
            k+=s[i+2];
            if(k=="abc")cnt++;
        }
        cout<<cnt<<endl;
    }
}
