#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        vector<pair<ll,ll> >v;
        vector<ll>v2;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            v2.push_back(arr[i]);
        }
        sort(arr,arr+n);
        for(int i=n-1;i>0;i--)
        {
            int f;
            for(int j=0;j<v2.size();j++)
            {
                if(arr[i]==v2[j])
                {
                    f=j;
                    break;
                }
            }
            if(f==i)
            {
                v2.pop_back();
                continue;
            }
            else
            {
                v.push_back({f+1,i+1});
                //swap(v2[f],v2[i]);
                vector<ll>z;
                for(int j=0;j<v2.size();j++)
                {
                    if(j==f)continue;
                    z.push_back(v2[j]);
                }
                v2=z;
            }
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<" "<<1<<endl;
    }
}
