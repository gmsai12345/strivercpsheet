#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define pb push_back
using namespace std;

int main() 
{
    fastread();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        loop(i,0,n,1)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        int negi = 0,posi=0;
        vector<int>farray;
        loop(i,0,n,1)
        {
           if(v[i]<0)
           {
             while(v[i]>0)
             {
                posi = i;
                i++;
            }
            loop(j,posi)
           }
           }
           else
           {
             if(v[i]<0)
              {
                negi = i;
                int maxi = INT_MIN;
                loopi(j,0,negi,1)
                {
                    maxi = max(maxi,v[j]);
                }
                farray.pb(maxi);
              }
           }
        }
        int fsum=0;
        int n1 = farray.size();
        loop(i,0,n1,1)
        {
            fsum += farray[i];
        }
        cout << fsum <<endl;
    }
    return 0;
}