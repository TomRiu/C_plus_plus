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
		string s;
		cin >> s;
		int res = s.size();
		map<char, int> m;
		for(int i = 0; i < s.size(); i++)
			m[s[i]]++;
		for(int i = 0; i < s.size(); i++)
		{
			if(m[s[i]] > 1)
			{
				res += m[s[i]] - 1;
				m[s[i]]--;
			}
		}
		cout << res << endl;
	}
	return 0;
}  

// C2: 
// #include<bits/stdc++.h> 
// #include<string> 
// using namespace std; 
// int main(){ 
//     int test; 
//     cin>>test; 
//     string str; 
//     while(test--){ 
//         cin>>str; 
//         int x=str.size(); 
//         int dem=0; 
//         for(int i=0;i<x;i++){ 
//             for(int j=i;j<x;j++){ 
//                 if(str[i]==str[j]) dem++; 
//             } 
//         } 
//         cout<<dem<<endl; 
//     } 
// }