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
    int n;
    cin >> n;
    vector<int>v;
    for(int i =0;i<n;i++)
    {
        int a;
        cin >>a;
        v.pb(a);
    }
    int maxs=INT_MIN,maxi=1;
    for(int i =1;i<n;i++)
    {
        if(v[i]>=v[i-1])
        {
            maxi++;
        }
        else
        {
            maxs = max(maxs,maxi);
            maxi=1;
        }
    }
    maxs = max(maxs,maxi);
    cout << maxs<<endl;
    return 0;
}