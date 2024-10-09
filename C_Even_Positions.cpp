
/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
   int n;
   cin>>n;
   string str;
   cin>>str;
   int open=0;
   string temp="";
   for(int i=0;i<n;i++) 
   {
           if(str[i]=='(')
           {
            open++;
           }
           else if(str[i]==')')
           {
            open--;
           }
           else if(str[i]=='_'&&open==0)
           {
           str[i]='(';
           open++;
           }
          else if(open>=1&&str[i]=='_')
          {
            str[i]=')';
            open--;
          }
   }

  // cout<<str<<en;
  ll sum=0;
  for(int i=0;i<n;i++)
  {
    int it=i+1;
     if(str[i]=='(')
     {
      sum=sum-it;
     }
     else
     {
        sum=sum+it;
     }
  }
  cout<<sum<<en;
}
   return 0;
}