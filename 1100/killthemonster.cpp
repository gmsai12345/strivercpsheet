#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
//#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
//#define pb push_back
using namespace std;
// important we can use a pair to store only the first and last position in the arrat
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ;
        unsigned long long int hc,dc,hm,dm;
        cin>>hc>>dc>>hm>>dm;
        unsigned long long int k,w,a;
        cin>>k>>w>>a;
        unsigned long long int flag=0;
        for(unsigned long long int i=0;i<=k;i++)
        {
            unsigned long long int ca=i;
            unsigned long long int cb=k-i;
 
            unsigned long long int newattack=dc+ca*w;
            unsigned long long int newhealth=hc+cb*a;
            unsigned long long int monsterturn,characterturn;
            if(newhealth%dm==0)
                monsterturn=newhealth/dm;
            else
                monsterturn=newhealth/dm + 1;
            if(hm%newattack==0)
                characterturn=hm/newattack;
            else
                characterturn=hm/newattack + 1;
            if(characterturn<=monsterturn)
            {
                flag=1;
                break;
            }
 
 
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
 

    }

