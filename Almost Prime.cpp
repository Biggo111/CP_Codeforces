#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check freopen("in.txt", "r", stdin);
#define biggo ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0)
#define MAX 3000

int main()
{
    ll n,c=0;
    cin>>n;
    bool isPrime[3001] = {false};
    int factors[3001] = {0};
    for(int i=2; i<=n; i++)
    {
        if(!isPrime[i])
        {
            for(int j=i+i; j<=n; j+=i)
            {
                isPrime[j] = true;
                factors[j]+=1;
            }
        }
        if(factors[i]==2)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
