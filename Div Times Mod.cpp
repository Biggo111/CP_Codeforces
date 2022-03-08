#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = 0;
    for(int i=1;i<k;i++)
    {
        if(n%i==0)
        {
            ans = k*(n/i)+i;
        }
    }
    cout<<ans<<endl;
}
