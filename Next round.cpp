#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,coun=0;
    int arr[1000];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0 && arr[i]>=arr[k-1])
        {
            coun++;
        }
    }
    cout<<coun<<endl;
}
