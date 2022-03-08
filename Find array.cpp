#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define check freopen("in.txt", "r", stdin);
//#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

int isPrimeNumber(int k)
{
    bool isPrime = true;
    for(int i=2; i<=k/2; i++)
    {
        if(k%2==0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        bool isPrime;
        int cnt=0;
        for(int i=2; i<1005; i++)
        {
            isPrime = isPrimeNumber(i);
            if(isPrime==true)
            {
                cout<<i<<" ";
                cnt++;
            }
            if(cnt==n){
                cout<<endl;
                break;
            }
        }
    }
   return 0;
}
//int isPrimeNumber(int k)
//{
//    bool isPrime = true;
//    for(int i=2; i<=k/2; i++)
//    {
//        if(k%2==0)
//        {
//            isPrime = false;
//            break;
//        }
//    }
//    return isPrime;
//}
//int main()
//{
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        for(ll i=2; i<=n+1; i++)
//        {
//            cout<<i<<" ";
//        }
//        cout<<endl;
//    }
//}
