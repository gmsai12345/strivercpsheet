#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t!=0)
	{
	ll n;
	cin >> n;
	int numz=0;
	if(n<=10)
	{
		cout << 1<<endl;
		cout << n<<endl;
		t--;
		 continue;
	}
	ll a = n;
	ll c = 0; 
	while(a!=0)
	{
		c++;
		a=a/10;
	}
	vector<int>v;
	for(int i =0;i<c;i++)
	{
		int d = n%10;
		if(d!=0)
		{
		v.push_back(pow(10,i)*d);
		}
		n=n/10;	
	}
	cout << v.size() << endl;
	reverse(v.begin(),v.end());
	for(auto i:v)
	{
		cout << i << " ";
	}
	cout << endl;
	t--;
	}
	return 0;
}