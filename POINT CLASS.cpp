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

double dis(Point &a, Point &b)
{
    double x = a.x - b.x;
    double y = a.y - b.y;
    double res = sqrt(x * x + y * y);
    return res;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		Point a, b;
        cin >> a >> b;
        cout << fixed << setprecision(4) << dis(a, b) << endl;
	}
}
