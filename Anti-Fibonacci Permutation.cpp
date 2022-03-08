#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

//void display(ll arr[],ll n)
//{
//    for(int i=0;i<n;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//}
//void findper(ll arr[],ll n)
//{
//    sort(arr,arr+n);
//    do{
//        //display(arr,n);
//        for(int i=0;i<n;i++)
//        {
//            cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//    }while(next_permutation(arr,arr+n));
//}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i] = i+1;
        }
        sort(arr,arr+n,greater<ll>());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[j]<<" ";
            }
            cout<<endl;
            swap(arr[0],arr[i+1]);
        }
    }
}
