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
		string s;
		cin >> s;
		int k; 
		cin >> k;
		set<char> st;
		for(int i = 0; i < s.size(); i++)
			st.insert(s[i]);
		if(26 - st.size() <= k) cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}  