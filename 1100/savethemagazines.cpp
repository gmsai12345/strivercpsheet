#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
//#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define pb push_back
using namespace std;
// important we can use a pair to store only the first and last position in the arrat
int main() 
{
    fastread();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>lids,arr;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            lids.pb(a);
        }
         for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            arr.pb(a);
        }
        int cnt = 0;
        priority_queue<int>pq;
        for(int i =1;i<n+1;i++)
        {
            
        }
     
        cout << s << endl;
    }
    return 0;
}