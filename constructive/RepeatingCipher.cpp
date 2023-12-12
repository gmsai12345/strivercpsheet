#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    int j =1;
    for(int i =0;i<n;i++)
    {
        ans += s[i];
        i += j;
        j++;
    }
    cout << ans << endl;
    return 0;
}