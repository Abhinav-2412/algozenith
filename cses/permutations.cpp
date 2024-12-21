#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
  ll n;
   cin>>n;
   if(n==1)
   {
     cout<<1<<" "<<endl;
     return;
   }
   if(n==2 || n==3)
   {
     cout<<"NO SOLUTION"<<endl;
    
     return;
   }
   if(n%2==0)
   {
     for(int i =2; i<=n;i+=2)
     {
       cout<<i<<" ";
     }
     for(int i =1; i<n; i+=2)
     {
       cout<<i<<" ";
     }
   }
   else
   {
      for(int i =2; i<n;i+=2)
     {
       cout<<i<<" ";
     }
     for(int i =1; i<=n; i+=2)
     {
       cout<<i<<" ";
     }
   }
   
   
}

signed main()
{
  
  solve();
}