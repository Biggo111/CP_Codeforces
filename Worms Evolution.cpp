#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int f = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[i]==arr[j]+arr[k] && i!=j && j!=k && i!=k)
                {
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                    f = 1;
                    break;
                }
            }
            if(f==1)break;
        }
        if(f==1)break;
    }
    if(f==0)
    {
        cout<<-1<<endl;
    }
}
