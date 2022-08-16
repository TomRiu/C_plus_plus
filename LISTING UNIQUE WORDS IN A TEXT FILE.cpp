#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
#define ull unsigned long long
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define test() int t; cin >> t; cin.ignore();while(t--)
#define faster() ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.s == b.s) return a.f < b.f; 
    return a.s > b.s; 
}
 
 
int main()
{
   freopen("DOCUMENT.in", "r", stdin);
   int n;
   cin >> n;

 
   vector<string> list;
 

   string delimit = ",.?!:;-/)(";
 

   map<string, int> danhdau;
   while (n--) {
       string s;
 

       getline(cin >> ws, s);
 

       for (int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
 

        for (int i = 0; i < delimit.size(); i++) {
            replace(s.begin(), s.end(), delimit[i], ' ');
        }
        string news = s;
 
        
        stringstream ss(news);
        string token;
        while (ss >> token) {
            danhdau[token]++;

        }
   }

    vector<pair<string, int> > vectormap;
    for (auto& it : danhdau) {
        vectormap.push_back(it);
    }
 
    sort(all(vectormap), cmp);
 
 
    for (auto i : vectormap) {
         cout << i.f << " " << i.s << endl;
    }
}
