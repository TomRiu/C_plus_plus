#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int n, a[100];
vector<int> v;
vector<string> vs;

void Save()
{
	string s = "";
	for(int i : v) s += to_string(i) + " ";
	vs.push_back(s);
}

void Try(int i)
{
	if(v.size() >= 2) Save();
	for(int j = i; j < n; j++)
	{
		if(v.empty() || v.back() < a[j]) 
		{
			v.push_back(a[j]);
			Try(j + 1);
			v.pop_back();
		}
		
	}
}

int main()
{
	ifstream fin("SEQUENCE.in");
	fin >> n;
	for(int i = 0; i < n; i++) fin >> a[i];
	Try(0);
	sort(vs.begin(), vs.end());
	for(string i : vs) cout << i << endl;
	return 0;
}
