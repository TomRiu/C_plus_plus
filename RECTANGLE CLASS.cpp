#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;
class Rectangle
{
private:
	int d, r;
	string color;
public: 
	void input()
	{
		cin >> d >> r >> color;
	}
	void fix()
	{
		color[0] = toupper(color[0]);
		FOR(i, 1, color.size()) color[i] = tolower(color[i]);
	}
	void output()
	{
		if(d > 0 && r > 0)cout << (d + r) * 2 << " " << d * r << " " << color;
		else cout << "INVALID";	
	}
};
 
int main()
{
	faster()
	Rectangle a;
	a.input();
	a.fix();
	a.output();
	return 0;
}
