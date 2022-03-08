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
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int c=0;
        while(!is_sorted(arr.begin(),arr.end()))
        {
            for(int i=c%2;i<n-1;i+=2)
            {
                if(arr[i]>arr[i+1])
                {
                    swap(arr[i],arr[i+1]);
                }
            }
            c++;
        }
        cout<<c<<endl;
    }
}
