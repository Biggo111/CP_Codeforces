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
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &x:v)cin>>x;
        sort(v.begin(),v.end());
        int s = v[n-1] - v[0];
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                s = min(s,(v[j]-v[i]));
            }
        }
        cout<<s<<endl;
    }
}
