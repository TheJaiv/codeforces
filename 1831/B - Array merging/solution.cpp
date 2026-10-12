#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    vector<ll> b(n);
    for (auto &x : b) cin >> x;
    vector<int> fa(2*n+1 ,0 );
    vector<int> fb(2*n+1, 0);
    int count = 1;
    int prev = a[0];
 
    for(int i = 1 ; i < n ; i++){
        if (a[i] == prev) count++;
        else{
            fa[a[i-1]] = max(fa[a[i-1]] , count);
            count = 1;
            prev = a[i];
            
        }
    }
    fa[a[n-1]] = max(fa[a[n-1]], count);
    count = 1;
    prev = b[0];
    for(int i = 1 ; i < n ; i++){
        
        if (b[i] == prev) count++;
        else{
            fb[b[i-1]] = max(fb[b[i-1]] , count);
            prev = b[i];
            count = 1;
        }
    }
    fb[b[n-1]] = max(fb[b[n-1]], count);
    int ans = 0;
    for (int i = 0 ; i < 2*n +1 ; i++){
        ans = max(ans , fa[i]+ fb[i]);
        // cout << ans << fa[i] << fb[i] << endl ;
    }
    cout << ans <<endl;
 
    
 
    
      
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}
 