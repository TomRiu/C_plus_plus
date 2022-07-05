//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{ 
	faster()
	test()
	{
		int n;
		cin >> n;
		int a[10]={4,20,38,50,38,20,8,5,0,0};
		cout << a[n - 1] << endl;
	}
	return 0;
}

// Code trâu
// #include <bits/stdc++.h>
// #define endl '\n'
// #define ll long long
// #define test() int t; cin >> t; cin.ignore(); while(t--)
// #define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// using namespace std;

// bool check(ll x)
// {
// 	string s = to_string(x);
// 	int tang = 0, giam = 0;
// 	for(int i = 0; i < s.size() - 1; i++)
// 	{
// 		if(s[i] < s[i + 1]) tang++;
// 		else if(s[i] == s[i + 1]) return 0;
// 		else giam++;
// 	}
// 	if(tang == s.size() - 1 || giam == s.size() - 1) return 1;
// 	return 0;
// }

// bool isPrime(ll n)
// {
//     if(n < 2) return 0;
//     double sqr = sqrt(n);
//     for(int i = 2; i <= sqr; ++i) 
//     	if(n % i == 0) return 0;
//     return 1;
// }

// int main()
// { 
// 	faster()
// 	test()
// 	{
// 		int n, cnt = 0;
// 		cin >> n;
// 		ll Begin = pow(10, n - 1);
// 		ll End = pow(10, n);
// 		for(ll i = Begin; i < End; i++)
// 			if(check(i) && isPrime(i)) cnt++;
// 		cout << cnt << endl;
// 	}
// 	return 0;
// }  