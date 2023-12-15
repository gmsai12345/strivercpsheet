#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
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
        int n,k;
        cin >> n >> k;
        vector<int>v;
        for(int i =0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        int c = 0,count=0;
        int s = 0;
        for(int i =0;i<n;i++)
        {
            s += v[i];
            c++;
            if(double(s/c)>=k)
            {
                s -= double(s/c);
            }
            else
            {
                count += c;
                c=0;
                s=0;
            }
        }
        cout << count << endl;
    }
    return 0;
}