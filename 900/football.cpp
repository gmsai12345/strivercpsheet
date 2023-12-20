#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define pb push_back
#define pob pop_back
#define vec vector<long long>
using namespace std;
int main() 
{
    fastread();
    string s;
    cin >> s;
    int count =1;
    int n = s.length();
    loop(i,1,n,1)
    {
        if(s[i]==s[i-1])
        {
            count++;
            if(count>=7)
    {
        cout << "YES"<<endl;
        return 0;

    }
        }
        else
        {
            count =1;
        }
    }
    
        cout << "NO"<<endl;
    
   
    return 0;
}