#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    long long int n,k;
    cin >> n >> k;
    while(k!=0)
    {
        int a = n%10;
        if(a==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
        k--;
    }
    cout << n << endl;
    return 0;
}