#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> v;
    for (int i = 1; i <= 9; i++)
    {
        string s = to_string(i);
        v.push_back(s);
        for (int j = 1; j < 4; j++)
        {
            s += to_string(i);
            v.push_back(s);
        }
    }
    while (t != 0)
    {
        int n;
        cin >> n;
        string str = to_string(n);
        int totalKeyPresses = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == str)
            {
                totalKeyPresses += v[i].length();
                break;
            }
            totalKeyPresses += v[i].length();
        }
        cout << totalKeyPresses << endl;
        t--;
    }
    return 0;
}
