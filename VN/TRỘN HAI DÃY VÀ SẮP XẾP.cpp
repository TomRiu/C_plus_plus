//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{ 
	faster()
	test()
	{
		int n, m;
		cin >> n >> m;
		vector<int> v;
		int a[n], b[m];
		for(int &i : a)
		{
			cin >> i;
			v.push_back(i);
		}
		for(int &i : b) 
		{
			cin >> i;
			v.push_back(i);
		}
		sort(v.begin(), v.end());
		for(int i : v) cout << i << ' ';
		cout << endl;
	}
	return 0;
}  