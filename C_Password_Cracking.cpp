
/* Allah is the best planner.He knows everything*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
const ll mod = 1e9 + 7;

int main()
{
    fast();

    int t = 1;
    fflush(stdout);
    cin >> t;
    while (t--)
    {
        fflush(stdout);
        ll n;
        cin >> n;
        string str = "";
        string ch = "0";

        int response;
          int flag=0;
        while (str.size() < n)
        {
            cout << "? " << str+'0' << endl;
            fflush(stdout);
            cin >> response;
            if (response == 1)
            {
                str = str+'0';
            }
            else
            {
               
                cout << "? " << str+'1'<< endl;
                fflush(stdout);
                cin >> response;
                if(response==1)
                {
                    str=str+'1';
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1&&str.size()<n)
        {
            while(str.size()<n)
            {
              cout<<"? " <<"0"+str<<endl; 
               fflush(stdout);
               cin>>response;
               if(response==1)
               {
                str='0'+str;
               }
               else
               {
                str='1'+str;
               }
            }
        }
        cout<<"! "<<str<<endl;
        fflush(stdout);
    }
    return 0;
}

/*RIfAt*/