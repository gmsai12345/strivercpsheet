#include <bits/stdc++.h>
#define ll long long int
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
        v.push_back(a);
    }
    int t = n-1;
    sort(v.begin(),v.end());
    vector<int>v1;
    for(int i =0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            v1.push_back(v[i]);
        }
    }
   for(int i =0;i<v.size();i++)
    {
        if(v[i]%2!=0)
        {
            v1.push_back(v[i]);
        }
    }
    int i =0;
    int t = n-1;
    while(t!=0&&i!=n)
    {
        if(v[i]!=0&&v[n-i]!=0)
        {
            v[i] = (v[i]+v[n-i])/2;
            v[n-i]=0;
        }
        i++;
        t--;
    }
    cout << v[(n/2)-1]<<endl;
    return 0;
}