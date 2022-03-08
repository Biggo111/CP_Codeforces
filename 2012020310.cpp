#include<bits/stdc++.h>
using namespace std;
struct pw
{
    int p;
    int w;
    double r;
};
bool cmp(pw a, pw b)
{
    return a.r>b.r;
}
int main()
{
    int n,m;
    cin>>n>>m;
    pw st[n];
    for(int i=0;i<n;i++)
    {
        cin>>st[i].p;
        cin>>st[i].w;
        st[i].r=(st[i].p*(1.0)/st[i].w);
    }
    sort(st,st+n,cmp);
//    for(int i=0;i<n;i++)
//    {
//        cout<<st[i].w<<" "<<st[i].p<<" "<<st[i].r<<endl;
//    }
     double maxx=0;
    for(int i=0;i<n;i++)
    {
        if(st[i].w<=m)
        {
            maxx+=st[i].p;
            m-=st[i].w;
        }
        else
        {
            maxx+=(st[i].r) * (m);
            m = 0;
            break;
        }
    }
    cout<<maxx<<endl;
}

