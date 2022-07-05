#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int NotPrime[1000005] = {};

int main()
{
	vector<int> Prime;
	for(int i = 2; i <= 1000; i++)
	{
		if(NotPrime[i] == 0)
		{
			for(int j = i * i; j <= 1000005; j += i)
			{
				NotPrime[j] = 1;
			}
		}
	}
	for(int i = 2; i < 100005; i++)
	{
		if(NotPrime[i] == 0) Prime.push_back(i);
	}
	faster()
	int T = 1;
	cin >> T;
	while(T--)
	{
		double n;
		cin >> n;
		n = sqrt(n);
		int cnt = 0;
        for(int i = 0; i < Prime.size(); i++)
        {
            if(Prime[i] <= n) cnt++;
            else break;
        }
        cout << cnt << endl;
	}
	return 0;
}