/*
    Author : Vimal Kumar Dubey
    Cf handle : code_vkd_001
    --------------------------------------------------------------------------------------

  When I wrote this, only God and I understood what I was doing
  Now, only God knows

  Roses do not bloom hurriedly; for beauty, like any masterpiece, takes time to blossom */

#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
 
/*-------------------------------------------------------------------------------------------------------------*/
#define loop(k,b,a)                                                for(ll k=b;k<a;k++)
#define vl                                                              vector<ll>
#define print(s)                                                      cout<<s<<endl;
#define beg2end(count)                                        count.begin(),count.end()
using namespace std;
#define ll long long
#define KOPIKO                                                  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define getArr                                                      ll n; cin>>n; vl arr(n); for(auto&i:arr) cin>>i;
void display(vl &arr){for(auto&i:arr) cout<<i<<" "; cout<<endl;}
/*-------------------------------------------------------------------------------------------------------------*/
 template<typename T> using minpq = priority_queue<T, vector<T>, greater<T>>;
 template<typename T> using maxpq = priority_queue<T>;
 
/*====================================================CODE BEGINS ->!====================================================*/
const ll MOD = 1e9 + 7;
void __jaiShreeRam() {

ll n; cin>>n;

ll ans = 1;

loop(i,0,n){
    ans = (ans *2)%MOD;
}

cout<<ans<<endl;





}


int main() {

    KOPIKO

    #ifndef ONLINE_JUDGE
    cerr << "Exectution Time : " << clock() / (double)CLOCKS_PER_SEC << "sec   ";
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


   // ll t; cin >> t; while (t--)

    __jaiShreeRam();
}
    