
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
     vector<ll>arr1(n);
     vector<ll>arr2(n);
     for(int i=0;i<n;i++)   
     {
        cin>>arr1[i];
     }
      for(int i=0;i<n;i++)   
     {
        cin>>arr2[i];
     }
     vector<ll>temp=arr2;

      reverse(temp.begin(),temp.end());

     if(arr1==arr2||arr1==temp)
     {
        cout<<"Bob"<<en;
     }
     else
     {
        cout<<"Alice"<<en;
     }
}
   return 0;
}