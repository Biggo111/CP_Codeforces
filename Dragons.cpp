#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int s,n;
    pair<int,int>v[1000];
    while(cin>>s>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        int k=0;
        sort(v,v+n);
        for(int i=0; i<n; i++)
        {
            if(s<=v[i].first)
            {
                k = 1;
                break;
            }
            else
            {
                s = s + v[i].second;
            }
        }
        if(k==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
