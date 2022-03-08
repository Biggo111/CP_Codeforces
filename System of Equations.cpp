#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n,m,c=0;
    cin>>n>>m;

    int k = max(n,m);
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(((i*i)+j)==n && (i+(j*j)==m))
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}
