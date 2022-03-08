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
        int n2 = 2*n;
        int arr[n2];
        for(int i=0;i<n2;i++)
        {
            cin>>arr[i];
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(i!=j)
                    v.push_back({arr[i],arr[j]});
            }
        }
        for(auto x:v)cout<<x.first<<x.second<<" ";
    }
}
