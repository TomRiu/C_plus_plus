#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

class Examinee
{
private:
    string name, d, m, y;
    float s1, s2, s3, p;
public:
    friend void input(Examinee &a)
    {
        getline(cin, a.name);
        getline(cin, a.d, '/');
        getline(cin, a.m, '/');
        cin >> a.y;
        cin >> a.s1 >> a.s2 >> a.s3;
    }
    friend void fix(Examinee &a)
    {
        string s, x;
        stringstream ss(a.name);
        while(ss >> x)
        {
            x[0] = toupper(x[0]);
            for(int j = 1; j < x.size(); j++)
            {
                x[j] = tolower(x[j]);
            }
            s += x + " ";
        }
        a.name = s;
        if(a.d[1] == NULL) a.d = "0" + a.d; 
        if(a.m[1] == NULL) a.m = "0" + a.m;
    }
    friend void print(Examinee &a)
    {
        fix(a);
        cout << a.name; 
        cout << a.d << '/' << a.m << '/' << a.y << " ";
        cout << fixed << setprecision(1) << a.s1 + a.s2 + a.s3;
    }
};
 
int main()
{
	faster()
    Examinee k;
    input(k);
    print(k);
	return 0;
}
