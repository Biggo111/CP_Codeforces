#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    while(n!=1)
    {
        cout<<n<<" ";
        for(int i=2; i<=n; i++)
        {
            if(n%i==0)
            {
                n = n/i;
                break;
            }
        }
    }
    cout<<n;
}
