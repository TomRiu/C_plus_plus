#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int nPrime(int n)
{
    double sqr = sqrt(n);
    for(int i = 2; i <= sqr; i++) if(n % i == 0) return i;
    return n;
}

int main()
{
	faster()
	int res[10005] = {};
	res[0] = 1;
	for(int i = 2; i <= 10000; i++)
	{
		res[i - 1] = nPrime(i);				
	}
	int T = 1;
	cin >> T; cin.ignore();
	while(T--)
	{
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) cout << res[i] << " ";
		cout << endl;
	}
	return 0;
}


// //#Created by Tôm Riu
// #include <bits/stdc++.h>
// #define endl '\n'
// #define ll long long
// #define test() int t; cin >> t; cin.ignore(); while(t--)
// #define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// using namespace std;

// int main()
// { 
// 	faster()
// 	test()
// 	{
// 		int n;
// 		cin >> n;
// 		for(int i = 1; i <= n; i++)
// 		{
// 			if(i == 1) cout << 1;
// 			else if(i % 2 == 0) cout << 2;
// 			else
// 			{
// 				for(int j = 2; j <= i; j++)
// 				{
// 					if(i % j == 0)
// 					{
// 						cout << j;
// 						break;
// 					}
// 				}
// 			}
// 			cout << " ";
// 		}
// 		cout << endl;
// 	}
// 	return 0;
// }  