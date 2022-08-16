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
	string s;
	cin >> s;
	string k = "aeiouy";
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
		int check = 0;
		for(int j = 0; j < k.size(); j++)
		{
			if(s[i] == k[j]) check = 1;
		}
		if(check == 0) cout << '.' << s[i];
	}
	return 0;
}  