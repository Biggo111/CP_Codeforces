#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>v,v2;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            v.push_back(i);
        }
        else
        {
            v2.push_back(i);
        }
    }
    if(v.size()==n-1)
    {
        cout<<v2[0]<<endl;
    }
    else if(v2.size()==n-1)
    {
        cout<<v[0]<<endl;
    }
}
