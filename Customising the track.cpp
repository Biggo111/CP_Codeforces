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
        ll n,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        ll k = sum%n;
        if(sum<=n)cout<<n<<endl;
        else if(k==0)cout<<0<<endl;
        else
        {
            int f = n - k;
            cout<<f*k<<endl;
        }
    }
}
