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
		string str;
		cin >> str;
		map<char, int> m;
		for(int i = 0; i < str.size(); i++)
			m[str[i]]++;
		for(char i : str)
			if(m[i] == 1) cout << i;
		cout << endl;
	}
	return 0;
}  