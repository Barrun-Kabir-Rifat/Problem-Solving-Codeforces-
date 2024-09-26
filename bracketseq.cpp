#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
 string str;
 cin>>str;
 int flag=0;
 if(str.size()%2!=0)
 {
    flag=1;
 }
 else if(str[0]==')')
 {
    flag=1;
 }
 else if(str[str.size()-1]=='(')
 {
   flag=1;
 }
 if(flag==1)
 {
    cout<<"NO"<<endl;
 }
 else
 {
    cout<<"YES"<<endl;
 }
}
  
int main()
{
  int t;
  cin>>t;
  while(t--) 
  {
    solve();
  } 
   return 0;
}