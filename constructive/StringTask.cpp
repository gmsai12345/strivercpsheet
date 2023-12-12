#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;

int main() 
{
    string s;
    cin >> s;
    string s1 = "";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=65 && s[i]<=92)
        {
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                   s[i] == 'O' || s[i] == 'U'||s[i]=='Y')
            {
                continue;
            }
            else
            {
                s1 += '.';
                s1 += char(s[i]+32);
            }
        }
        else if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||  
                   s[i] == 'o' || s[i] == 'u'||s[i]=='y')
        {
            continue;
        }
        else
        {
            s1 += '.';
            s1 += s[i];
        }
    }
    cout << s1 << endl;
    return 0;
}
