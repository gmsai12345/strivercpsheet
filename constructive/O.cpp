#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i =0;i<n;i++)
    {
        int a;
        cin >> a;
        v.pb(a);
    }
    int maxi = INT_MIN,count = 0,maxicount=INT_MIN;
    for(int i =0;i<n;i++)
    {
        if(v[i]>maxi)
        {
            maxi = max(maxi,v[i]);
            count++;
            maxicount=max(maxicount,count);
        }
        else
        {
            maxi = v[i];
            count = 1;
        }
    }
    cout << maxicount << endl;
    return 0;
}