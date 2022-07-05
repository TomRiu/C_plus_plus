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
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	for(int i : s) cout << i << " ";
	return 0;
}  