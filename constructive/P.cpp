#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 1;
    int c = 2;
    while(s<=n)
    {
        s = s+c;
        c++;
    }
    cout << c<< endl;
    return 0;
}