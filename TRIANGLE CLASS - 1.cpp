#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

class Point
{
public:
	double x, y;
	friend istream &operator >> (istream &is, Point &a)
	{
		is >> a.x >> a.y;
		return is;
	}
};

class Triangle : public Point
{
public:
    Point a, b, c;
	void input()
	{
		cin >> a >> b >> c;
	}
	double chuViTamGiac()
	{
		double ab = sqrt((b.x - a.x)*(b.x - a.x)+(b.y - a.y)*(b.y - a.y));
		double bc = sqrt((b.x - c.x)*(b.x - c.x)+(b.y - c.y)*(b.y - c.y));
		double ca = sqrt((c.x - a.x)*(c.x - a.x)+(c.y - a.y)*(c.y - a.y));
		if(((ab + bc) > ca) && ((ab + ca) > bc) && ((bc + ca) > ab))
		{
            double res = sqrt((b.x - a.x)*(b.x - a.x)+(b.y - a.y)*(b.y - a.y)) + sqrt((b.x - c.x)*(b.x - c.x)+(b.y - c.y)*(b.y - c.y)) + sqrt((c.x - a.x)*(c.x - a.x)+(c.y - a.y)*(c.y - a.y));
			return res;
		}
		else return 0;
	}
};
 
int main()
{
	faster()
    test()
    {
		Triangle k;
        k.input();
        if(k.chuViTamGiac() > 0) cout << fixed << setprecision(3) << k.chuViTamGiac();
        else cout << "INVALID"; 
        cout << endl;
    }
	return 0;
}
