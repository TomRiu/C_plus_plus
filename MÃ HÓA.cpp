//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool check(ll x)
{
	string s = to_string(x);
	int tang = 0, giam = 0;
	for(int i = 0; i < s.size() - 1; i++)
	{
		if(s[i] < s[i + 1]) tang++;
		else if(s[i] == s[i + 1]) return 0;
		else giam++;
	}
	if(tang == s.size() - 1 || giam == s.size() - 1) return 1;
	return 0;
}

bool isPrime(ll n)
{
    if(n < 2) return 0;
    double sqr = sqrt(n);
    for(int i = 2; i <= sqr; ++i) 
    	if(n % i == 0) return 0;
    return 1;
}

int main()
{ 
	faster()
	test()
	{
		string s;
		cin >> s;
		int cnt = 1;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == s[i + 1])
			{
				cnt++;
			}
			else
			{
				cout << s[i] << cnt;
				cnt = 1;
			}
		}
		cout << endl;
	}
	return 0;
}  