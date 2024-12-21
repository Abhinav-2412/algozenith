#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void solve()
{
  string s;
  cin>>s;
  
  map<char,int>mp;
  for(auto it: s)
  {
    mp[it]++;
  }
  int count =0;
  for( auto it : mp)
  {
    if(it.second %2 !=0) count++;
  }
  if(count>1) 
  {
    cout <<"NO SOLUTION"<<endl;
    return;
  }
  string a = "";
  string b = "";
  for( auto it: mp)
  {
    if(it.second %2 ==0)
    {
      for(int i =0 ; i<(it.second)/2;i++)
      {
        a+=it.first;
        b+=it.first;
      }
    }
  }
  for(auto it: mp)
  {
    if(it.second %2 !=0)
    {
      for(int i =0; i< it.second; i++)  a+=it.first;
     
    }
  }
  reverse(b.begin(),b.end());
  a+=b;
  cout<<a<<endl;
  
  
}

signed main()
{
  solve();
}