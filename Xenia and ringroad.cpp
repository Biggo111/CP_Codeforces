#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int b[100005];
    for(int i=1; i<=m; i++)
    {
        cin>>b[i];
    }
    long long int c=b[1]-1;
    for(int i=1; i<m; i++)
    {
        if(b[i]>b[i+1])
        {
            c += n+b[i+1] - b[i];
        }
        else
        {
            c += b[i+1] - b[i];
        }
    }
    cout<<c<<endl;
}
