#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define pb push_back
#define pob pop_back
#define vec vector<long long>
using namespace std;
int main() 
{
    fastread();
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        // to check if a number has a odd dicisior or not bit manipulation n&n-1==0 no else yes
        if((n&(n-1))==0) cout << "NO"<<endl;
        else cout << "YES" <<endl;
    }
    return 0;
}