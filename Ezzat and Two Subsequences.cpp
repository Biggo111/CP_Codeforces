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
        ll arr[n];
        double sum = 0;
        ll mx = -1000000000;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            if(mx<arr[i])
            {
                mx = arr[i];
            }
        }
        sum = sum - mx;
        double k = sum/(n-1);
        double z = k + mx;
        printf("%0.9lf\n",z);
    }
}
