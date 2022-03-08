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
        ll n;
        cin>>n;
        ll arr[n];
        ll arr2[n];
        map<ll,ll>mp;
        vector<ll>like;
        vector<ll>dislike;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr2[i] = arr[i];
            mp[arr[i]]=i;
        }
        //for(auto x:mp)cout<<x.first<<" "<<x.second<<endl;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')dislike.push_back(arr[i]);
            else like.push_back(arr[i]);
        }
        sort(like.rbegin(),like.rend());
        sort(dislike.rbegin(),dislike.rend());
        sort(arr,arr+n);
        reverse(arr,arr+n);
        int i;
        for(i=0;i<like.size();i++)
        {
            arr2[mp[like[i]]] = arr[i];
        }
        for(int j=0;j<dislike.size();j++)
        {
            arr2[mp[dislike[j]]] = arr[i];
            i++;
        }
        for(int k=0;k<n;k++)
        {
            cout<<arr2[k]<<" ";
        }
        cout<<endl;
    }
}
