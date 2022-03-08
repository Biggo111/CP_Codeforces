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
        vector<ll>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll c = 0,k=0;

        for(ll i=0;i<n;i++)
        {
            if(arr[i]>=i)
            {
                c+=(arr[i]-i);
            }
            else if(arr[i]+c>=i)
            {
                c-=(i-arr[i]);
            }
            else
            {
                k = 1;
                break;
            }
        }
        if(k==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
