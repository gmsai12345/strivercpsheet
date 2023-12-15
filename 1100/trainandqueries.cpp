#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
//#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
//#define pb push_back
using namespace std;
// important we can use a pair to store only the first and last position in the arrat
int main() 
{
    fastread();
    int t;
    cin >> t;
    while(t--)
    {
        int n,tt;
        cin >> n >> tt;
        map<int,pair<int,int>>map;
        loop(i,0,n,1)
        {
            int a;
            cin >>a;
            if(!map.count(a))
            {
                map[a].first = i;
                map[a].second = i;
            }
            else
            {
                map[a].second = i;
            }
        }
        while(tt--)
        {
            int b1,b2;
            cin >>b1>>b2;
              if(!map.count(b1) or !map.count(b2) or map[b1].first > map[b2].second) 
              {
                cout << "NO\n"; //equals = 0 = wrong
              }
        else cout << "YES\n";
        }
    }
    return 0;
}