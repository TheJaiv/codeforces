#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    ll max = 0,sum = 0,count = 0;
    for (int i = 0; i < n ; i++){
        if (a[i] > max) {
            sum += max;
            max = a[i];
        }
        else{
            sum += a[i];
        }
        if (sum == max) {count++ ;}
    }
    cout << count <<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}