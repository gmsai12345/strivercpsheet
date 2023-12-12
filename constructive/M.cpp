#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    string s;
    cin >> s;
    vector<int>v;
    for(int i =0;i<s.length();i+=2)
    {
        v.pb(s[i]-48);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        cout << v[i] << "+";
    }
    cout << v[v.size()-1];
    return 0;
}