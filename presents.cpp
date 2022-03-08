#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<pair<int,int>>p(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        p.push_back(make_pair(v[i],i));
    }
    for(int i=0;i<n;i++)
    {
        cout<<p[i].first<<" "<<p[i].second;
    }
}
