#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,a;
    cin>>n>>c;
    vector<int>v(n);
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>=v[i+1])
        {
            a = v[i]-v[i+1];
            if(a>=c)
            {
                a=a-c;
                v2.push_back(a);
            }
            else
            {
                v2.push_back(0);
            }
        }
        else
        {
            v2.push_back(0);
        }
    }
    //for(auto x:v2)cout<<x<<" ";
    sort(v2.rbegin(),v2.rend());
    cout<<v2[0]<<endl;
}
