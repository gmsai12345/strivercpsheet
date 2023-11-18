#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
   ll n, k, l, c, d, p, nl, np;
   cin >> n >> k >> l >>  c>> d >> p >> nl >> np;
   cout << min(min(k * l / nl, c * d), p / np) / n << endl;
   return 0;
}