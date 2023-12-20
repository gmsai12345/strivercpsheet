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
    int n,m;
    cin >> n >> m;
    vector<int>v;
    loop(i,0,n,1)
    {
        int a;
        cin >>a;
        v.pb(a);
    }
    sort(v.begin(),v.end());
    int sum = 0;
    for(int i =0;i<m;i++)
    {
        if(v[i]<0) sum += abs(v[i]);
    }
    cout << sum <<endl;
}