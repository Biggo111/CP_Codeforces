#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int a,b,c,k;
    cin>>a>>b;
    if(a>b)
    {
        c=b;
        k=a-b;
    }
    else
    {
        c=a;
        k=b-a;
    }
    cout<<c<<" "<<(k/2);
}
