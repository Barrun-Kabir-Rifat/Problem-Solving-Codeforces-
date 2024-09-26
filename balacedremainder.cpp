#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  
typedef long long int ll;
typedef unsigned long long int ull;
  
void solve()
{
  
}
  
int main()
{
//fast();
 
 int t=1; 
 cin>>t;
while(t--)
{
 int n;
 cin>>n;
 ll arr[n];
 int count0=0,count1=0,count2=0;
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
    if(arr[i]%3==0)
    {
        count0++;
    }
    else if(arr[i]%3==1)
    {
        count1++;
    }
    else
    {
        count2++;
    }
 }
 int dif1=0,dif2=0,dif3=0;
    int count=0;
  if(count0>(n/3))
  {
    dif1=count0-(n/3);
    while(count1<(n/3))
    {
       
        if(dif1==0)
       {
        break;
       }
       count1++;
       count++;
         dif1--;
    }
     while(count2<(n/3))
     {
       dif1--; 
       if(dif1>=0) 
       {
        count=count+2;
        count2++;
       }
       else
       {
        break;
       }
    }
  }
  if(count1>(n/3))
  {
    dif2=count1-(n/3);
    while(count0<(n/3))
    {
      
       dif2--; 
       if(dif2>=0) 
       {
        count=count+2;
         count0++;
       } 
       else
       {
        break;
       }
    }
     while(count2<(n/3))
    {
        if(dif2==0)
       {
        break;
       }
       count2++;
       count++;
       dif2--;  
    }
  }
  if(count2>(n/3))
  {
    dif3=count2-(n/3);
    while(count0<(n/3))
    {
        if(dif3==0)
       {
        break;
       }
       count0++;
       count++;
       dif3--;  
    }
     while(count1<(n/3))
    {
        
       
       dif3--;  
       if(dif3>=0)
       {
      count1++;
       count=count+2;
       }
       else
       {
        break;
       }
    }
  }
  cout<<count<<"\n";
}
   return 0;
}