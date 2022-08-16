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
    string id, name;
    float s1, s2, s3, p;
public:
    friend void input(Examinee &a)
    {
        cin >> a.id; cin.ignore();
        getline(cin, a.name);
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
        a.p = a.s1 * 2 + a.s2 + a.s3;
    }
    friend void print(Examinee &a)
    {
        fix(a);
        cout << a.id << " " << a.name; 
        cout << setprecision(20) << a.p << " ";
        if(a.id[2] == '1') 
        {
            cout << 0.5;
            a.p += 0.5;
        }    
        else if(a.id[2] == '2') 
        {
            cout << 1;
            a.p += 1;
        }
        else if(a.id[2] == '3') 
        {
            cout << 2.5;
            a.p += 2.5;
        }
        cout << " ";
        if(a.p >= 24) cout << "PASSED";
        else cout << "FAILED";
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
