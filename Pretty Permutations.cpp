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
        int v[n];
        for(int i=1; i<=n; i++)
        {
            v[i] = i;
        }
        if(n%2==0)
        {
            for(int i=1; i<=n; i++)
            {
                swap(v[i],v[i+1]);
                i++;
            }
        }
        //for(auto x:v)cout<<x<<" ";
        else
        {
            for(int i=1; i<=n-3; i++)
            {
                swap(v[i],v[i+1]);
                i++;
            }
            swap(v[n-2],v[n-1]);   //1 2 3 4  5 6 7
            swap(v[n-1],v[n]);
        }
        for(int i=1;i<=n;i++)cout<<v[i]<<" ";
        cout<<endl;
    }
}
