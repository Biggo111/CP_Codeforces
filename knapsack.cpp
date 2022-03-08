#include<bits/stdc++.h>
using namespace std;
struct pw
{
    int w;
    int p;
    int r;
};
int main()
{
    pw st[1000];
    int n,m;
    cin>>n>>m;
    vector<int>p(n);
    vector<int>w(n);
    for(int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>w[i];
    }
    vector<double>d;
    int j=0;
    for(int i=0; i<n; i++)
    {
        double a = (p[i]*1.0) / w[j];
        j++;
        d.push_back(a);
    }
    for(int i=0;i<n;i++)
    {
        cin>>st[i].w;
        cin>>st[i].p;
    }
}
