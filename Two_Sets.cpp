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

void __jaiShreeRam() {



  ll n; cin>>n;

  ll sum = n*(n+1)/2;

  if(sum&1){
    print("NO")
    return;
  }



  print("YES")


  vl a,b, taken(n+1,-1); 


  ll temp = 0, req = sum/2;



  ll num = n;

  while(temp +num<req){
    temp+=num;
    taken[num] = 1;
    a.push_back(num);
    num--;
  }

  ll extra = req - temp;

  a.push_back(extra);
  taken[extra] = 1;


  loop(i,1,n+1){
    if(taken[i] == -1) b.push_back(i);
  }



  print(a.size())
  display(a);

  print(b.size())
  display(b);


}


int main() {

  KOPIKO

    #ifndef ONLINE_JUDGE
  cerr << "Exectution Time : " << clock() / (double)CLOCKS_PER_SEC << "sec   ";
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    #endif


//  ll t; cin >> t; while (t--)

  __jaiShreeRam();
}
