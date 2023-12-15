#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
//#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
//#define pb push_back
// 10^18 is the n value we cant go for bruteforce only thing we can go with is observation
using namespace std;
// important we can use a pair to store only the first and last position in the arrat
int main() 
{
    fastread();
    ll l,r;
    cin >> l >> r;
    if(l%2!=0)
    {
        l++;
    }
    if(l+2>r)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << l << " " << l+1 << " " << l+2 <<endl;
    }
    return 0;
}