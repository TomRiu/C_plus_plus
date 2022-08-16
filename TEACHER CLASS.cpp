#include<bits/stdc++.h>
#define c(n) cout << n << endl ;
#define ci(n) cin >> n;
#define c_pre(n) cout << fixed << setprecision(3) << n ;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
typedef unsigned long long ull;
typedef double db;
typedef long long ll;
typedef long double ld;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;

class NV_ {
public:
    string id, name;
    int luong, bac, bonus , tong;
};

void input(NV_ &a){
    getline(cin,a.id);
    getline(cin,a.name);
    cin >> a.luong;
}

int chuoi_to_string(string s){
    int so = 0;
    int n = s.length();
    for(int i=0;i<n;i++){
        int x = s[i] - 48;
        so = so*10+i;
    }
    return so;
}

void process(NV_ a){
    if(a.id[0] == 'H' && a.id[1] == 'P'){a.bonus=900000;}
    else if (a.id[0] =='H' && a.id[1] == 'T'){a.bonus=2000000;}
    else if (a.id[0] =='G' && a.id[1] == 'V'){a.bonus=500000;}
       int he_so_luong = 0 ; 
    if(a.id[2]=='0') { he_so_luong += a.id[3] - '0'; }
    else { 
            he_so_luong += (a.id[2]-'0')*10 + (a.id[3] - '0');
    }

    a.tong = a.luong*he_so_luong + a.bonus;

    cout << a.id << " " << a.name << " " << he_so_luong << " " << a.bonus << " " << a.tong;

}


main(){
    NV_ a;
    input(a);
    process(a);
    
    
}
