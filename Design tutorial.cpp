#include<bits/stdc++.h>
using namespace std;
//bool primility(int s)
//{
//    if(s==1)return false;
//    for(int i=2;i*i<n;i++)
//    {
//        if(s%i==0)return false;
//    }
//    return true;
//}
int main()
{
//    int n,k,s,m;
      int n;
    cin>>n;
    if(n%2==0)
    {
//        s = n/2;
//        bool k = primility(s);
//        if(k==true)
//        {
//            m = s - 1;
//        }
//        f = m+2;
//        cout<<m<<" "<<f;
          cout<<"4"<<" "<<n-4<<endl;
    }
    else
    {
        cout<<"9"<<" "<<n-9<<endl;
    }
}
