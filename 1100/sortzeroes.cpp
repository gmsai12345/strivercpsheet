#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define pb push_back
using namespace std;
// important we can use a pair to store only the first and last position in the arrat
void updatemap(int i,map<int,vector<int>>map)
{

}
int main() 
{
    fastread();
    int t;
    cin >> t;
    while(t--)
    {
        map<int,vector<int>>map;
        int n;
        cin >> n;
        vector<int>v;
        loop(i,0,n,1)
        {
            int a;
            cin >> a;
            map[a].pb(i);
            v.pb(a);
        }
        vector<int>sorted = v;
        int count=0;
        // 4 1 5 3 2
        // 4 1 0 3 2
        
        
        sort(sorted.rbegin(),sorted.rend());
        for(int i =0;i<sorted.size();i++)
        {
           vector<int>arr = map[sorted[i]];
           if(arr[arr.size()-1]!=n-i-1)
           {
            for(int i =0;i<arr.size();i++)
            {
                //if(v[arr)
                v[arr[i]] = 0;
            }
            count++;
            updatemap(i,map);
           }
        }
        
    }
    return 0;
}