#include<bits/stdc++.h>
using namespace std;
const int sz = 1e8 + 10;
int status[sz];
void Generate_Prime()
{
    int sq = sqrt(sz*1.0)+1;
    for(int i=4;i<=sz;i+=2)status[i]=1;
    for(int i=3;i<=sq;i+=2)
    {
        if(status[i]==0)
        {
            for(int j=i*i;j<=sz;j+=(i*2))
            {
                status[j] = 1;
            }
        }
    }
}
int main()
{
    Generate_Prime();
    int n;
    while(cin>>n)
    {
        if(status[n]==0)
        {
            string s = to_string(n);
            reverse(s.begin(),s.end());
            int reverse_number = stoi(s);
            if(status[reverse_number]==0)
            {
                cout<<n<<" is emirp."<<endl;
            }
            else
            {
                cout<<n<<" is prime."<<endl;
            }
        }
        else
        {
            cout<<n<<" is not prime."<<endl;
        }
    }
}
