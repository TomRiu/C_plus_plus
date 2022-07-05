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
		set<char> s;
		string a[n];
		for(string &i : a)
		{
			cin >> i;
			for(int j = 0; j < i.size(); j++)
				s.insert(i[j]);
		}
		for(char i : s) cout << i << " ";
		cout << endl;
	}
	return 0;
}  