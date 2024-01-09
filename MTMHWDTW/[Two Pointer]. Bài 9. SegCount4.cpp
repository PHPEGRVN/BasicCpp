#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#define ll long long
using namespace std;

int main()
{
	int n, s;
	cin>>n>>s;
	int a[n+1];
	ll ans=0;
	int l=1;
	multiset <int> se;
	for(int r=1;r<=n;r++)
	{
		cin>>a[r];
		se.insert(a[r]);
		while(*se.rbegin()-*se.begin()>s)
		{
			se.erase(se.find(a[l++]));
		}
		ans+=r-l+1;
	}
	 cout<<ans;
}
