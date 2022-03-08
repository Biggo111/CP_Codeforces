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
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>arr[i][j];
            }
        }
        int c=0,sum=0,mn=10000;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]<0)c++;
                mn = min(mn,abs(arr[i][j]));
                sum+=abs(arr[i][j]);
            }
        }
        if(c%2==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<sum-(2*mn)<<endl;
        }
    }
}
