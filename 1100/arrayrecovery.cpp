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
// important we can use a pair to store only the first and last position in the array
long long sum(vec v)
{
    long long s = 0;
    for(int i =0;i<v.size();i++)
    {
        s += v[i];
    }
    return s;
}
int main() 
{
    fastread();
    long long t;
    cin >> t;
    while(t--)
    {
        long long n,k;
        cin >> n >> k;
        vec v;
        for(int i =0;i<n;i++)
        {
            long long a;
            cin >> a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        // 10 11 12 13 15 22
        //  k = 2
        // 0 0 10  
        for(long long i =0;i<k;i++)
        {
            long long a = sum(v);
            long long n = v.size();
            if(a-v[n-1]<a-v[0]-v[1]&&v.size()>=2)
            {
                v.erase(v.begin(),v.begin()+2);
            }
            else
            {
                v.pob();
            }
        }
        long long sum = 0;
        for(int i =0;i<v.size();i++)
        {
            sum += v[i];
        }
        cout << endl;
        //cout << sum << endl;
    }
    return 0;
}