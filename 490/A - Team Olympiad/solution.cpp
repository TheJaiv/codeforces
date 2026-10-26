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
  ll n;
  cin >> n;
  //   vll a(n);
  unordered_map<ll, vector<ll>> dic;
  vi len(3,0);
  for (ll i = 0; i < n; i++) {
    int x;
    cin >> x;
    dic[x].push_back(i+1);
    dbg(x);
    len[x-1] += 1;
  }
  dbg(dic,len);
 
  int d = *min_element(len.begin(), len.end());
  cout << d << "
";
  for (int i = 0; i < d; ++i) {
    cout << dic[1][i] << " " << dic[2][i] << " " << dic[3][i] << "
";
  }
 
  //   dbg(n, a);
 
  // your code here
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t = 1;
//   cin >> t;
  while (t--)
    solve();
  return 0;
}