#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
int main()
{
    biggo;
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int arr[4] = {x1,x2,x3,x4};
    sort(arr,arr+4);
    reverse(arr,arr+4);
    int k = arr[0] - arr[1];
    int k2 = arr[0] - arr[2];
    int k3 = arr[0] - arr[3];
    cout<<k<<" "<<k2<<" "<<k3<<endl;
}
