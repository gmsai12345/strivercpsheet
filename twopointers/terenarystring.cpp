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
        string s;
        cin >> s;
        int n = s.length();
        map<char,int>map;
        int mins = INT_MAX;
        loop(i,0,n,1)
        {
            map[s[i]]=i;
            if(map.size()==3)
            {
                int pos1 = map['1'];
                int pos2 = map['2'];
                int pos3 = map['3'];
                int maxi = max({pos1,pos2,pos3});
                int mini = min({pos1,pos2,pos3});
                mins = min(mins,(maxi-mini));
            }
        }
        if(mins==INT_MAX) cout << 0 << endl;
        else cout << mins+1 << endl;
    }
    return 0;
}
    