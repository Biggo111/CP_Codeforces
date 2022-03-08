#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    int s = m - n;
    int ans = arr[n-1] - arr[0];
    for(int i=0;i<=s;i++)
    {
        int k = arr[i+n-1] - arr[i];
        if(ans>k)
        {
            ans = k;
        }
    }
    cout<<ans<<endl;
}
