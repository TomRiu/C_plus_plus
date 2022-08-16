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
		int n;
		cin >> n;
		int cnt = 0;
		set<int> s;
		map<int, int> m;
		for(int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			s.insert(x);
			m[x]++;
		}
		for(int i : s)
			if(m[i] > 1) cnt += m[i];
		cout << cnt << endl;
	}
	return 0;
}  