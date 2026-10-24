// Local build: g++ -std=c++17 -O2 -Wall -Wextra -DLOCAL template.cpp -o a
// Judge build: no -DLOCAL, so all dbg() calls compile to nothing.
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
 
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define frr(s, n) for (int i = s; i < n; ++i)
 
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
    if (!first)
      os << ", ";
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
template <class H, class... T> void dbg_out(const H &h, const T &...t) {
  cerr << " " << h;
  dbg_out(t...);
}
// Usage: dbg(x, v, mp);  ->  [x, v, mp]: 5 {1, 2, 3} {(1, 2), (3, 4)}
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
 
void solve() {
  ll n, m;
  cin >> n >> m;
  vector<pair<ll, ll>> food(n);
  ll total = 0;
  for (auto &x : food){
    cin >> x.first;
    total += x.first;}
  for (auto &x : food) {
    cin >> x.second;
    
  }
  vector<pair<ll, pair<ll, ll>>> sorted(n);
  for (ll i = 0; i < n; ++i) {
    sorted[i].first = i;
    sorted[i].second = food[i];
  }
 
  sort(sorted.begin(), sorted.end(), [](const auto &a, const auto &b) {
    return a.second.second < b.second.second;
  });
  ll p = 0;
  for (ll i = 0; i < m; ++i) {
    ll a, b;
    cin >> a >> b;
    a--;
    if (total < b) {
        cout << 0 << "
";
        if (total > 0){
        for (int i = 0 ; i < n ; i++){
            food[i].first = 0;
        }}
        total = 0;
        continue;
    }
    if (food[a].first >= b) {
        food[a].first -= b;
        total -= b;
        cout << b * food[a].second << "
";
        
    } else {
        
        ll price = 0;
        total -= food[a].first;
        b -= food[a].first;
        price += food[a].second * (food[a].first);
        food[a].first = 0;
        
    
        for (ll i = p ; i < n ; i++) {
            ll k = sorted[i].first;
            if (food[k].first >= b) {
                food[k].first -= b;
                total -= b;
                price +=  b * food[k].second;
                cout << price << "
";
                break;
            } else {
                total -= food[k].first;
                b -= food[k].first;
                price += food[k].second * (food[k].first);
                food[k].first = 0;
                p++;
            }
            
            // cout << 1 << "
";
            
            // idx is the position
            
        }
    }
    // dbg(total);
  }
 
  //   dbg(n, a);
 
  // your code here
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t = 1;
  // cin >> t;
  while (t--)
    solve();
  return 0;
}