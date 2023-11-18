// bit++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int i=0;
    while(t!=0)
    {
    	string s;
    	cin >> s;
    	if(s[1]=='+')
    	{
    		i++;
    	}
    	else
    	{
    		i--;
    	}
    	t--;
    }
    cout << i << endl;
}