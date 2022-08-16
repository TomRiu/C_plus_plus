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
	set<string> st;
	test()
	{
		string s;
		getline(cin, s);
		st.insert(s);
	}
	cout << st.size();
	return 0;
}  