#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	int n;
	cin >> n;
	vector<int>v;
	for(int i =0;i<n;i++)
	{
		int num;
		cin >> num;
		v.push_back(num);
	}
	int maxi = INT_MIN,mini=INT_MAX;
	for(int i =0;i<n;i++)
	{
		maxi = max(maxi,v[i]);
		mini = min(mini,v[i]);
	}
	// finding mini position
	int minpos=0,maxpos=0;
	for(int i =0;i<n;i++)
	{
		if(v[i]==mini) minpos = i;
	}
		for(int i =0;i<n;i++)
	{
		if(v[i]==maxi) 
		{
			maxpos = i;
			break;
		}
	}
	cout << maxpos + (n - 1 - minpos) - (minpos < maxpos ? 1 : 0) << endl;
	
	
	return 0;
}