#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int checkk(vector<int>&v3)
{
    int i=0,j=v3.size()-1;
    int z = 1;
    while(i<j)
    {
        if(v3[i]!=v3[j])
        {
            z = 0;
            break;
        }
        i++;
        j--;
    }
    return z;
}
void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=n-1;
    int k = 0;
    int a,b;
    while(i<j)
    {
        if(arr[i]!=arr[j])
        {
            k = 1;
            a = arr[i];
            b = arr[j];
            break;
        }
        i++;
        j--;
    }
    if(k==0)cout<<"YES"<<endl;
    else
    {
        vector<int>v,v1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==a)continue;
            v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==b)continue;
            v1.push_back(arr[i]);
        }
        int s = checkk(v);
        int s2 = checkk(v1);
        if(s==1 || s2==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
