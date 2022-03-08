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
        ll n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int>v;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+i;j<n-1;j++)
            {
                int k = max(arr[i],arr[j])* min(arr[i],arr[j]);
                v.push_back(k);
                k=0;
            }
        }
        //for(auto x:v)cout<<x<<" ";
        sort(v.rbegin(),v.rend());
        cout<<v[0]<<endl;
    }
}
