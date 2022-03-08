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
        vector<int>s(4);
        for(int &x:s)cin>>x;
        int k = max(s[0],s[1]);
        int f = max(s[2],s[3]);
        int a = min(s[0],s[1]);
        int b = min(s[2],s[3]);
        if(k<b || f<a)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
