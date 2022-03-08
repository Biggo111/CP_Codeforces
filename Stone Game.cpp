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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int c = 2;
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(v[i]>mx)
            {
                mx = v[i];
            }
            else if(v[i]<mn)
            {
                mn = v[i];
            }
        }
        int m=0,k=0;
        for(int i=0;i<n;i++)
        {
            if(mx==v[i])
            {
                m = i+1;  //1
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(mn==v[i])
            {
                k = i+1;   //0
                break;
            }
        }
        int z=0;
        for(int i=0;i<m;i++)
        {
            z++;
        }
        int zz = n - m+1;  //4
        int zzz = min(z,zz); //2
        int x = 0;
        for(int i=0;i<k;i++)
        {
            x++; //1
        }
        int xx = n - k+1; //4
        int x1 = min(x,xx); //1
        int an = x1 + zzz;
        cout<<an<<endl;
    }
}
