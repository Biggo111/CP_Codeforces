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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                arr[i] = arr[i]&arr[j];
            }
        }
        cout<<arr[0]<<endl;
    }
}
