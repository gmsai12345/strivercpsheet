// https://codeforces.com/problemset/problem/1729/D
#include <bits/stdc++.h>
#define ll long long int
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
#define loop(i,Start,End,Inc) for(ll i=Start;i<End;i+=Inc)
#define loopi(j,Start,End,Inc) for(ll j=Start;j<End;j+=Inc)
#define loopR(i,Start,End,Dec) for(ll i=Start;i>=End;i-=Dec)
#define pb push_back
using namespace std;
int main() 
{
    fastread();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        vector<int>burlesr;
        vector<int>burles;
        loop(i,0,n,1)
        {
            int a;
            cin >> a;
            burlesr.pb(a);
        }
         loop(i,0,n,1)
        {
            int a;
            cin >> a;
            burles.pb(a);
        }
        //x = [8,3,9,2,4,5] and y = [5,3,1,4,5,10].
        // 1 3 4 5 5 10
        //-3 0 -8 2 1 5 // balance array after he purchases for himself
        //-8 -3 0 1 2 5
        // we now will have to group all the possitive part in a single group and negative part ina single group
        // 1 4 1 2 4 2
        // 1 3 3 2 3 4
        // 0 -1 2 0 -1 2
        // -1 -1 0 0 2 2 
        // here minimum number of groups is 1 maximum is 3
        // for any n elements maximum number of groups is n/2
        vector<int>diff;
        loop(i,0,n,1)
        {
            diff.pb(burles[i]-burlesr[i]);
        }
        sort(diff.begin(),diff.end());
        vector<int>negpart;
        vector<int>posspart;
        loop(i,0,n,1)
        {
            if(diff[i]>=0)
            {
                posspart.pb(diff[i]);
            }
            else
            {
                negpart.pb(diff[i]);
            }
        }
       sort(negpart.rbegin(),negpart.rend());
       sort(posspart.begin(),posspart.end());
       int j =0;
       int negteam=0;
       loop(i,0,negpart.size(),1)
       {
         while(j>0&&posspart[j]+negpart[i]<0)
            j++;
         if(j==posspart.size())
         {
            break;
         }
         negteam++;
         j++;
       }
       cout << negteam + (posspart.size()-negteam)/2<<endl;
    }
    return 0;
}