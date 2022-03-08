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
        string s;
        cin>>s;
        int r=0,g=0;
        sort(s.begin(),s.end());
        map<char,int>m;
        for(auto x:s)
        {
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second>=2)
            {
                r++;
                g++;
            }
            else
            {
                if(g>r)r++;
                else g++;
            }
        }
        cout<<r<<endl;
    }
}
