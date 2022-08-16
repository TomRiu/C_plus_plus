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
	faster()
	ifstream f; 
    f.open("DATA.in");
    string s;
    int a[10005] = {}, idx = 0;
    while(!f.eof())
    {
        getline(f, s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp)
        {
            int cnt = 0;
            FOR(i, 0, tmp.size())
            {
                if(isdigit(tmp[i])) 
                {
                    cnt++;
                    if(cnt > 9) a[idx] = 0;
                    else a[idx] = a[idx] * 10 + tmp[i] - '0';
                }
                else if(a[idx] > 0) idx++;
            }
            if(a[idx] > 0) idx++;
        }
        if(a[idx] > 0) idx++;
    }
    f.close();
    long long sum = 0;
    FOR(i, 0, idx) sum += a[i];
    cout << sum;
	return 0;
}
