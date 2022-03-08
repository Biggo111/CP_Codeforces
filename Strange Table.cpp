#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    long long int n,m,x;
    cin>>n>>m>>x;
    double n1=n,m1=m,x1=x;
    double c = ceil(x/n1);
    long long int r = x % n;
    if(r==0)r=n;
    long long int a = (r-1)*m;
    long long int ans = a + c;
    cout<<ans<<endl;
    }
}
