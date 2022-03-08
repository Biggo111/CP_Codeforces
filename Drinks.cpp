#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    float s = 0,k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s += arr[i];
    }
    k = s / n;
    cout<<k<<endl;
}
