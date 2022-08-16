#include<bits/stdc++.h>
#define c(n) cout << n << endl ;
#define ci(n) cin >> n;
#define c_pre(n) cout << fixed << setprecision(3) << n ;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define found(x,y) (x.find(y) != x.end())
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
typedef unsigned long long ull;
typedef double db;
typedef long long ll;
typedef long double ld;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main() {
    faster();
    ifstream input1("DATA1.in");
    ifstream input2("DATA2.in");
    set<string> se1, se2;
    string tmp;
    string s;
    while(input1 >> s){
        FOR(i,0,s.size()){
            s[i] = tolower(s[i]);
        }
        se1.insert(s);
    }
    while (input2 >> s){
        FOR(i,0,s.size()){
            s[i] = tolower(s[i]);
        }
        se2.insert(s);
    }
    for(auto it : se1){
        if(!found(se2,it)){
            cout << it << " ";
        }
    }
    cout << endl;
     for(auto it : se2){
        if(!found(se1,it)){
            cout << it << " ";
        }
    }
    
   

    return 0;
}
