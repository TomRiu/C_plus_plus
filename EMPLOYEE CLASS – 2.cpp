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
    string ten, chucvu;
    int luong,ngay,luong_thang, luong_thuong, bonus, luong_tong;
};

void input(NV_ &a){
    getline(cin,a.ten);
    cin >> a.luong >> a.ngay;
    cin.ignore();
    getline(cin,a.chucvu);
}

void process(NV_ a){
    a.luong_thang = a.luong * a.ngay;
    if(a.ngay >=25 ){ a.luong_thuong = a.luong_thang / 5 ; }
    else if(a.ngay >=23) { a.luong_thuong = a.luong_thang / 10 ;}
    else {a.luong_thuong = 0 ;}
    if(a.chucvu=="GD" ){ a.bonus = 250000 ;}
    else if(a.chucvu=="PGD" ){ a.bonus = 200000 ;}
    else if(a.chucvu=="TP" ){ a.bonus = 180000 ;}
    else if(a.chucvu=="NV" ){ a.bonus = 150000 ;}
    a.luong_tong = a.luong_thang + a.luong_thuong + a.bonus;
    cout << "NV01 " << a.ten << " " << a.luong_thang << " " << a.luong_thuong << " " << a.bonus << " " << a.luong_tong;
    
}


main(){
    NV_ a;
    input(a);
    process(a);
    
    
}
