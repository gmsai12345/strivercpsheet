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
   // string s1 = "WUB";
    // string final1;
    // string s2="";
    for(int i =0;i<s.size();i++)
    {
        //s2 = s.substr(i,i+1);
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
             cout << " ";
             i+=2;
        }
        else
        {
            cout << s[i];
          
        }

    }
  //  cout << final1<<endl;
    return 0;
}
