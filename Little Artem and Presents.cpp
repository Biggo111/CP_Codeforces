#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,g;
    cin>>n;
    if(n%3==0)
    {
        g = 2*(n/3);
        cout<<g<<endl;
    }
    else
    {
        if(n<3)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<2*(n/3)+1<<endl;
        }
    }
}
