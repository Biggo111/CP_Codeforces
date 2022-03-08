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
        int n,d;
        cin>>n>>d;
        int arr[n];
        int k=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>d)
            {
                k = 1;
                break;
            }
        }
        if(k==0)cout<<"YES"<<endl;
        else
        {
            int f = 0;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i]+arr[j]<=d)
                    {
                        f = 1;
                        break;
                    }
                }
            }
            if(f==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
