#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)

//#define MAX 10005
//
//vector<int>primes;
//
//void sieve()
//{
//    bool prime[MAX];
//    for(int i=2; i<=MAX; i++)prime[i] = true;
//    for(int i=4; i<=MAX; i+=2)prime[i]= false;
//    for(int i=3; i<=MAX; i+=2)
//    {
//        if(prime[i])
//        {
//            for(int j=i*i; j<=MAX; j+=i*2)
//            {
//                prime[j] = false;
//            }
//        }
//    }
//    for(int i=2; i<=MAX; i++)
//    {
//        if(prime[i])
//        {
//            primes.push_back(i);
//        }
//    }
//}
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(__gcd(i, n)==1)cnt++;
    }
    cout<<cnt<<endl;
//    sieve();
//    int n;
//    cin>>n;
//    ll cnt = 1;
//
//    for(int i=0;i<primes.size();i++)
//    {
//        if(primes[i]>=n)
//        {
//            break;
//        }
//        cnt++;
//    }
//    ll ff = sqrt(n);
//    if(ff*ff==n)
//    {
//    cout<<cnt+1<<endl;
//    }
//    else
//    {
//        cout<<cnt-2<<endl;
//    }
}

