
#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
    faster()
    test()
    {
        string s;
        getline(cin, s);
        int check = 0;
        int cnt = 0, pn = 0;
        for(int i = 5; i < 10; i++)
        {
            if(i == 7 || i==8) continue;
            if(s[i] == s[i + 1]) cnt++;
        }
        for(int i = 5; i < 11; i++)
        {
            if(i == 8) continue;
            if(s[i] == '6' || s[i] == '8') pn++;
        }
        if(cnt == 3 || pn == 5) check = 1;
        else
        {
        	int kt=0;
            for(int i = 5; i < 10; i++)
            {
                if(i == 7 || i==8) continue;
                if(s[i] >= s[i + 1] || s[7] >= s[9])
                {
                    kt=1;
                    break;
                }
            }
            if(kt==0) check=1;
        }
        if(check == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
