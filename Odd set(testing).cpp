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
        int n,c=0,c2=0;
        cin>>n;
        int n2 = 2*n;
        int arr[n2];
        for(int i=0;i<n2;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n2;i++)
        {
            if(arr[i]%2==0)c++;
            else c2++;
        }
        if(c==c2)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
