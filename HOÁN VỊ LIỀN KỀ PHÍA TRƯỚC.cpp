//#Created by Tôm Riu
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define test() int t; cin >> t; cin.ignore(); while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

void Next_Permutation(int n, int a[])
{
	int i = n - 2;
	while(i >= 0 && a[i + 1] < a[i]) i--;
	if(i >= 0)
	{
		int j = n - 1;
		while(a[i] > a[j]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n);
	}
}

void Prev_Permutation(int n, int a[])
{
	int i = n - 2;
	while(i >= 0 && a[i] < a[i + 1]) i--;
	if(i >= 0)
	{
		int j = n - 1;
		while(a[j] > a[i]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n);
	} 
}

int main()
{ 
	faster()
	test()
	{
		int n;
		cin >> n;
		int a[n];
		for(int &i : a) cin >> i;
		Prev_Permutation(n, a);
		for(int i : a) cout << i << ' ';
		cout << endl;
	}
	return 0;
}