#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

int main()
{
	faster()
	int a[1005] = {};
	ifstream d1 ("DATA1.in");
	ifstream d2 ("DATA2.in");
	string line, a1[1005] = {}, a2[1005] = {};
	int idx1 = 0, idx2 = 0;
	while(!d1.eof())
	{
		getline(d1, line);
		stringstream ss(line);
		string s;
		while(ss >> s)
		{
			FOR(i, 0, s.size() - 1) a1[idx1] += tolower(s[i]);
			idx1++;
		}
	}
	while(!d2.eof())
	{
		getline(d2, line);
		stringstream ss(line);
		string s;
		while(ss >> s)
		{
			FOR(i, 0, s.size() - 1) a2[idx2] += tolower(s[i]);
			idx2++;
		}
	}
	d1.close();
	d2.close();
	string uni[2010] = {};
	string its[1005] = {};
	int idxu = 0, idxi = 0;
	FOR(i, 0, idx1 - 1)
	{
		uni[idxu++] = a1[i];
		FOR(j, 0, idx2 - 1)
		{
			if(a1[i] == a2[j])
			{
				its[idxi] = a1[i];
				a2[j] = "";
			}
		}
		idxi++;
	}
	FOR(i, 0, idx2 - 1)
	{
		if(a2[i] != "") uni[idxu++] = a2[i];
	}
	FOR(i, 0, idxu - 1)
	{
		FOR(j, 0, idxu - 1)
		{
			if(uni[i] == uni[j] && j != i) uni[j] = "";
		}
	}
	FOR(i, 0, idxi - 1)
	{
		FOR(j, 0, idxi - 1)
		{
			if(its[i] == its[j] && j != i) its[j] = "";
		}
	}
	sort(uni, uni + idxu);
	sort(its, its + idxi);
	FOR(i, 0, idxu - 1) 
		if(uni[i] != "")cout << uni[i] << " ";
	cout << endl;
	FOR(i, 0, idxi - 1) 
		if(its[i] != "") cout << its[i] << " ";
	return 0;
}
