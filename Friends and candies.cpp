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
        int n,s=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        int c=0;
        if(s%n!=0)cout<<"-1"<<endl;
        else
        {
            int f = s/n;
            for(int i=0;i<n;i++)
            {
                if(arr[i]>f)c++;
            }
            cout<<c<<endl;
        }

    }
}
