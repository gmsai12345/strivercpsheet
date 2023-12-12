#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
using namespace std;

int main() 
{
    ll t;
    cin >> t;
    while(t != 0)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // Count the number of consecutive black cells
        ll count = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                count++;
            }
        }

        // Initialize the minimum number of cells to recolor
        ll tot = count;

        for (int i = k; i < n; i++) {
            // Update count for the current window
            if (s[i - k] == 'W') {
                count--;
            }
            if (s[i] == 'W') 
            {
                count++;
            }

            // Update the minimum number of cells to recolor
            tot = min(tot,count);
        }

        cout << tot << endl;
        t--;
    }   
    return 0;
}
