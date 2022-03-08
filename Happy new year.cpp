#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s=0;
    vector<int>x(3);
    for(int i=0;i<3;i++)
    {
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    for(int i=0;i<3;i++)
    {
        s = abs(x[i] - x[i+1]);
        s = s + s;
    }
    cout<<s<<endl;
}
