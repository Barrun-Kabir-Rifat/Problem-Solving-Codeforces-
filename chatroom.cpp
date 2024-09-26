#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string a="hello";
    int i,j=0,count=0;
    for(i=0;i<str.size();i++)
    {
         if(str[i]==a[j])
         {
            j++;
            count++;
         }
    }
    if(count==5)
    cout<<"YES";
    else
    cout<<"NO";
   return 0;
}