#include<bits/stdc++.h.>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k = 0;
        for(int i=0;i<n;i++)
        {
            int p = sqrt(arr[i]);
            if(p*p!=arr[i])
            {
                k = 1;
                break;
            }
        }
        if(k==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
