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
        int n,sum=0,sum2=0;
        cin>>n;
        int a[n],b[n];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=1; i<=n; i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        if(sum!=sum2)cout<<-1<<endl;
        else
        {
            vector<int>v,v2;
            for(int i=1; i<=n; i++)
            {
                if(a[i]>b[i])
                {
                    int z = a[i] - b[i];
                    while(z--)
                    {
                        v.push_back(i);
                    }
                }
                else if(b[i]>a[i])
                {
                    int z = b[i] - a[i];
                    while(z--)
                    {
                        v2.push_back(i);
                    }
                }
            }
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" "<<v2[i]<<endl;
            }
        }
    }
}
