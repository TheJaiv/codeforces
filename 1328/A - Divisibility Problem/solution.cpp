#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int a,b;
    cin >> a;
    cin >> b;
    if (a%b == 0) cout << 0 << endl;
    else cout << b-(a%b) << endl;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}