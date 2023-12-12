#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
using namespace std;

int main() 
{
    fastread();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        map<int,int>map;
        loop(i,0,n,1)
        {
            int a;
            cin >> a;
            map[a]++;
            v.push_back(a);
        }
        int total = 0;
        int maxi = INT_MIN;
        loop(i,0,2*n+1,1)
        {
            int total = 0;
            for(auto it:map)
            {
                int s = i-it.first;
                if(map.find(s)!=map.end())
                {
                    total += min(it.second,map[s]);
                }
            }
            total = total/2;
            maxi = max(maxi,total);
        }
        cout << maxi <<endl;
      
        
    }
    return 0;
}