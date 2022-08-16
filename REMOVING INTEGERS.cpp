#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const ll MOD = 1e9 + 7;
using namespace std;

int main()
{
    string a[1005], res[1005];
    int line = 0, idx = 0;
    ifstream in ("DATA.in");
    while(!in.eof())
    {
        getline(in, a[line]);
        string tmp;
        stringstream ss(a[line]);
        while(ss >> tmp)
        {
            if(tmp.size() > 9) res[idx++] = tmp;
            else
            {
                for(int i = 0; i < tmp.size(); i++)
                {
                    if(!isdigit(tmp[i]))
                    {
                        res[idx++] = tmp;
                        break;
                    }
                }
            }
        }
        line++;
    }
    in.close();
    sort(res, res + idx);
    for(int i = 0; i < idx; i++) cout << res[i] << " ";
    return 0;
}
