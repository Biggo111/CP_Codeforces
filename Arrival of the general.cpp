#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int maxi=arr[0],mini=arr[0],a,b;
    for(int i=0;i<n;i++)
    {
        if(maxi<arr[i]){
                maxi=arr[i];
                a = i;
        }
        else if(mini>=arr[i]){
                mini=arr[i];
                b = i;
        }
    }
    if(a>b)
    {
        cout<<a + (n-1-b) - 1;
    }
    else
    {
        cout<<a + (n-1-b);
    }
}
