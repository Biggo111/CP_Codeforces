#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int t,d,m;
    cin>>t>>d>>m;
    int arr[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    if(m==0)
    {
        if(t>d)
        {
            cout<<"N"<<endl;
        }
        else
        {
            cout<<"Y"<<endl;
        }
        return 0;
    }

    int gap,mx = -1;
    int k = d - arr[m-1];
    int f = arr[0];
    //cout<<f<<endl;

    for(int i=1; i<m; i++)
    {
        int e = arr[i] - arr[i-1];
        if(e>=t){
            cout<<"Y"<<endl;
            return 0;
        }
    }
    if(arr[0]>=t || (d-arr[m-1])>=t) cout<<"Y"<<endl;
    else cout<<"N"<<endl;
}
