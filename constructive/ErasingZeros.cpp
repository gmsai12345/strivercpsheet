#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int toerase = 0;
        int l1 = -1;
        int flag = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '1')
            {
                l1 = i;
            }
            else if(s[i] == '0' && l1 != -1)
            {
                int j = i;
                while(j < s.length() && s[j] == '0')
                {
                    j++;
                }
                if(j < s.length() && s[j] == '1')
                {
                    toerase += j - l1 - 1;
                    i = j - 1;  // Update i to skip the 1 found in the inner loop
                }
                l1 = -1;
            }
        }
        cout << toerase << endl;
    }

    return 0;
}
