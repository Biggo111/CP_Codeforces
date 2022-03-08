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
        int A,B,n,sum=0;
        cin>>A>>B>>n;
        vector<pair<int,int>>v(n);
        for(auto &x:v)cin>>x.first;
        for(auto &x:v)cin>>x.second;
        sort(v.begin(),v.end());
        int z = 0;
        for(int i=0;i<n;i++)
        {
            if(B<=0)
            {
                z++;
                break;
            }
            int k = v[i].second/A;
            int k2 = v[i].second%A; ///0
            int k3 = B / v[i].first;
            int k4 = B%v[i].first; ///9
            if(k4)k3++;
            if(k2)k++;
            k = min(k,k3);
            B-=k*v[i].first;
            v[i].second-=k*A;
        }
        if(v[n-1].second>0)z++;
        else z = 0;
        if(z>0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

