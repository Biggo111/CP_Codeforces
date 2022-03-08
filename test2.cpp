#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k1,k2;
        cin>>n>>k1>>k2;
        int p = n * 2;
        int w,b;
        cin>>w>>b;
        int z = w + b;
        int f=0;
        f=k1+k2;
        if(f>=z)
        {
            if(p-f>=z)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
