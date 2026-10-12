#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
   int n;
        ll k;
        cin >> n >> k;
 
        vector<ll> sum(n);
        vector<ll> extraCost(n);
 
        ll minSum = LLONG_MAX;
 
        for (int i = 0; i < n; i++) {
            ll a, b, c;
            cin >> a >> b >> c;
 
            sum[i] = a + b + c;
            minSum = min(minSum, sum[i]);
 
            if (a == b && b == c) {
             
                extraCost[i] = -1;
            }
            else if (a <= b && b <= c) {
              
                ll setup = min(b - a + 1, c - b + 1);
                extraCost[i] = 2 * setup;
            }
            else {
             
                extraCost[i] = 0;
            }
        }
 
        ll low = minSum;
        ll high = minSum + k + 1;
 
        while (high - low > 1) {
            ll mid = low + (high - low) / 2;
 
            ll needed = 0;
            bool possible = true;
 
            for (int i = 0; i < n; i++) {
                ll gain = max(0LL, mid - sum[i]);
 
                if (gain == 0) {
                    continue;
                }
 
                if (extraCost[i] == -1) {
                    possible = false;
                    break;
                }
 
                needed += gain + extraCost[i];
 
                if (needed > k) {
                    possible = false;
                    break;
                }
            }
 
            if (possible) {
                low = mid;
            } else {
                high = mid;
            }
        }
 
        cout << low << '
';
    }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
}