#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,y=0;
    cin>>n;

    vector<int>a(n);
    for(int i = 1; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    for(int i=1; i<n; i++)
    {
        bool present = binary_search(a.begin(),a.end(),i);
        if(present==false)
        {
            cout<<i;
            y++;
            break;
        }
    }
    if(y==0)
    {
        cout<<n<<endl;
    }
}
