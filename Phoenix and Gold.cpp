#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0,k=0;
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum==x)
            {
                swap(arr[i],arr[n-1-i]);
            }
            if(sum!=x)
            {
                //swap(arr[i],arr[i+1]);
                k=1;
            }
            else
            {
                k=0;
            }
        }
        if(k==1)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
