// Local build: g++ -std=c++17 -O2 -Wall -Wextra -DLOCAL template.cpp -o a
// Judge build: no -DLOCAL, so all dbg() calls compile to nothing.
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
 
// const int MOD = 1e9 + 7;
// const int INF = 1e9;
// const ll LINF = 1e18;
 
#ifdef LOCAL
// Prints pairs, vectors, sets, maps, and any nesting of them.
template <class A, class B>
ostream &operator<<(ostream &os, const pair<A, B> &p);
 
template <class T, class = decltype(begin(declval<T>())),
          class = enable_if_t<!is_same_v<T, string>>>
ostream &operator<<(ostream &os, const T &c) {
    os << "{";
    bool first = true;
    for (auto &x : c) {
        if (!first) os << ", ";
        first = false;
        os << x;
    }
    return os << "}";
}
 
template <class A, class B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
    return os << "(" << p.first << ", " << p.second << ")";
}
 
void dbg_out() { cerr << endl; }
template <class H, class... T>
void dbg_out(const H &h, const T &...t) {
    cerr << " " << h;
    dbg_out(t...);
}
// Usage: dbg(x, v, mp);  ->  [x, v, mp]: 5 {1, 2, 3} {(1, 2), (3, 4)}
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
ll fin(ll s, ll m, const vector<ll>& l, const vector<ll>& r, const vector<ll>& P) {
    ll hiX = s + m - 1;   
    ll loX = s - 1;       
 
   
    int i1 = upper_bound(l.begin(), l.end(), hiX) - l.begin();
    ll a = 0;
    if (i1 > 0)
        a = P[i1 - 1] + (min(r[i1 - 1], hiX) - l[i1 - 1] + 1);
 
   
    int i2 = upper_bound(l.begin(), l.end(), loX) - l.begin();
    ll b = 0;
    if (i2 > 0) 
        b = P[i2 - 1] + (min(r[i2 - 1], loX) - l[i2 - 1] + 1);
 
    return a - b;
}
 
void solve() {
        int n;
        ll m, k;
        cin >> n >> m >> k;
 
        vector<ll> l(n), r(n), lent(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> l[i] >> r[i];
            lent[i + 1] = lent[i] + (r[i] - l[i] + 1);
            
        }
        dbg(lent);
        ll best = 0;
        int j = 0;
        ll ans ;
      
        for (int i = 0; i < n; i++) {
            ll s = l[i];
            ll e = s + m - 1;
            if (j < i) j = i;
            while (j + 1 < n && l[j + 1] <= e) j++;
 
            ll cnt = lent[j] - lent[i] + (min(r[j], e) - l[j] + 1);
            if (cnt > best){
                best = cnt;
                ans = l[i];
            
            }
       
 
        }
        if (k == 0) {
    cout << r[n-1] + 1 << "
";   
    return;
}
        if (best == k){
            cout << ans << endl;
            return;
            
        }
        if ( best < k ){
            cout << -1 << endl;
            return;
        }
        
       
        ll low = ans;
        ll high = r[n-1]+1;
 
        while(high - low > 1){
            ll mid = (high + low)/2;
            if (fin(mid , m , l , r , lent) >= k){
                low = mid;
            }
            else{
                high = mid;
            }
        }
        cout<< low <<endl;
 
        }
        
    
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
 