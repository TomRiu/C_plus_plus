//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool check(vector<int> v)
{
	int even = 0, odd = 0;
	for(int i = 0; i < v.size(); i++)
	{
		if(v[i] % 2) odd++;
		else even++;
	}
	if(v.size() % 2) return odd > even;
	return even > odd;
}

int main()
{ 
	faster()
	test()
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		vector<int> v;
		while(ss >> s)
			v.push_back(stoi(s));
		if(check(v)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}  