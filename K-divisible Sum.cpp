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
        int n,k;
        cin>>n>>k;
        if(n==k)cout<<1<<endl;
        else if(n==1)cout<<k<<endl;
        else
        {
            int ans = 0,f;
            if(k>n)
            {
                ans = k / n;
                if(k%n!=0)ans++;
                cout<<ans<<endl;
            }
            else
            {
                ans = n/k;
                if(n%k!=0)
                {
                    ans++;
                }
               k*=ans;
               int c = k/n;
               f = k%n;
               if(f!=0)c++;
               cout<<c<<endl;
            }
        }
    }
}
