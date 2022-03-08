#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,coun=0,a,b,c;
    bool k=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c;
        if(a+b+c>=2)
        {
            coun++;
        }
    }
    cout<<coun<<endl;
}
