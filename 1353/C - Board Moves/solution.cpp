#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n;
    cin >> n;
    ll a = (n-1)/2;
    ll count = 0;
    count += a*a*n;
    count -= a*a*a;
    count -= n*(((a)*(a-1))/2);
    count += (a*(a-1)*(4*a+1))/6;
    cout << 4*count <<endl;
 
 
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}