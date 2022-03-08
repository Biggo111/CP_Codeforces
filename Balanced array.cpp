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
        vector<int>v;
        if(n%2==0)
        {
            if(n%4==0)
            {
                cout<<"YES"<<endl;
                for(int i=1; i<=n; i++)
                {
                    if(i%2==0)
                    {
                        v.push_back(i);
                        sum=sum+i;
                    }
                }
                for(int i=1; i<=n; i++)
                {
                    if(i%2!=0)
                    {
                        v.push_back(i);
                        sum2 = sum2 + i;
                    }
                }
                int s = sum - sum2;
                v[n-1] = s + v[n-1];
                for(auto x:v)cout<<x<<" ";
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

}
