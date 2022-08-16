#include <bits/stdc++.h>
#define endl '\n'
#define test() int t; cin >> t; while(t--)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	faster()
	test()
	{
		cin.ignore();
		string n;
        cin >> n;
        long long tmp;
        while(n.size() > 1)
        {
        	tmp = 0;
            for(int i = 0; i < n.size(); i++)
            {
                tmp = tmp + n[i] - '0';
            }
            n = to_string(tmp);
        }
        if(n == "9") cout << "1" << endl;
        else cout << "0" << endl;
	}
	return 0;
}






