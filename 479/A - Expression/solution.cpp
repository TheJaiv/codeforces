#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int a ,b ,c;
    cin >> a >> b >> c;
    int ans = a + b + c;
ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);
 
	cout << ans << endl;
    
 
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}