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
        int arr[n];
        int arr2[n] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int stock = arr[n-1];
        for(int i=n-1;i>=0;i--) ///3
        {
            if(stock>0 || arr[i]>0)  ///3
            {
                arr2[i] = 1;
                stock = max(stock,arr[i]);  ///1
                stock--;     ///0
            }
            else
            {
                stock = arr[i]; ///
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
}
