#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
    ll n;
    cin >> n;
    int i =0;
    for(i =0;i<n;i++)
    {
        int num;
        cin >> num;
        if(num==1)
        {
            cout << "HARD"<<endl;
            i--;
            break;
        }
    }
    if(i==n) cout << "EASY"<<endl;
    return 0;
}