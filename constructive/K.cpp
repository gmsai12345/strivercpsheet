#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main()
{
    fastread();
    int n;
    cin >> n;
    int arr[n][2];
    
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[i][0] = a;  // this line was incorrect, it should be arr[i][0] = a;
        arr[i][1] = b;
    }
    
    int capacity = 0, current = 0;
    
    for (int i = 0; i < n; i++)
    {
        current = current - arr[i][0] + arr[i][1];
        capacity = max(capacity, current);
    }
    
    cout << capacity << endl;
    return 0;
}
