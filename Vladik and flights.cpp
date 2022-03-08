#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    vector<char>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    if((v[a-1]=='0' && v[b-1]=='0') || (v[a-1]=='1' && v[b-1]=='1'))
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
}
