#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
 
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end() , [](int a , int b){return abs(a)<abs(b);});
    ll sum = 0; 
 
   ll count = 0;
   for (ll i  :a){
    if (i <= 0) count++ ; 
 
   }
   if (count % 2 == 0){
    for (ll i : a){
        sum += abs(i);
    }
   }
   else{
    for (int i = 1 ; i < n ; i++){
        sum += abs(a[i]);
    }
    sum -= abs(a[0]);
 
 
   }
   cout << sum <<endl;
 
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}
 
 
 