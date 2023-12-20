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
   for(int i=0;i<m;i++)
    {
        int a;
        cin >>a;
        v.pb(a);
    }
    int abs=INT_MAX;
  //  int maxi=INT_MIN,INT_MIN;
    for(int i =0;i<m;i++)
    {
        int maxi=INT_MIN,mini=INT_MAX;
        int k = n;
        int j =i;
        while(k!=0&&j<m)
        {
            maxi = max(maxi,v[j]);
            mini = min(mini,v[j]);
            j++;
        }
        abs = min(abs,maxi-mini);
    }
    cout << abs<<endl;
    return 0;
}
