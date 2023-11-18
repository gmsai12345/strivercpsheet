#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	ll x1,x2,x3;
	cin >> x1>>x2>>x3;
	ll ans = max({abs(x1-x2),abs(x2-x3),abs(x1-x3)});
	cout << ans<<endl;
	return 0;
}