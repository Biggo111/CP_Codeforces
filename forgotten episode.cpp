#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=1;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int j = 1,k=0;
    for(int i=1;i<=n-1;i++)
    {
        if(v[i]!=j)
        {
            k=1;
            cout<<j;
            break;
        }
        j++;
    }
    if(k==0) cout<<n<<endl;
}
