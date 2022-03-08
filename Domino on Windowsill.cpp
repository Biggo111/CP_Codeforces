#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,k1,k2,w,b;
        cin>>n>>k1>>k2>>w>>b;
        int f = n * 2;
        int k3 = k1 + k2;
        int z1 = w * 2;
        int z2 = b * 2;
        if(k3>=z1)
        {
                if(f-k3>=z2)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
