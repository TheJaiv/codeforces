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
  int n, k;
  cin >> n >> k;
  vll a(n);
  unordered_map<ll, vector<ll>> nums;
  ll count = 0;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    if (nums[a[i]].size() < k) {
      nums[a[i]].push_back(i);
      count++;
    }
  }
  vll ans(n);
  count -= count%k;
  int counter = 0;
  for(auto &x : nums){
    for(auto &y : x.second){
        ans[y] = ++counter;
        counter %= k;
        if (--count == 0 ){
            goto _output;
        }
    }
  }
  _output :
    for (int i = 0 ;  i < n ; ++i){
        cout << ans[i] << " ";
        
    }
    cout  << "
";
    
 
 
 
  //   unordered_map<ll, pii> ans;
  //   int count = 0;
  //   for (auto &x : a) {
  //     if (ans[x].first < k) {
  //       // cout << ans[x] << " ";
  //       count++;
  //     }
  //     ans[x].first++;
  //   }
  //   int colors[k];
  //   fill(colors, colors + k, count / k);
  //   count -= count%k;
  //   int current = 1;
  //   // dbg(ans);
  //   for (auto &x : a) {
  //     if (count > 0) {
  //       if (ans[x].first > k) {
  //         cout << 0 << " ";
  //         ans[x].first--;
  //       } else {
  //         if (ans[x].second == 0) {
  //           while (true) {
  //             if (colors[current - 1] == 0) {
  //               if (current == k)
  //                 current = 1;
  //               else
  //                 current++;
  //             } else {
  //               cout << current << " ";
  //               colors[current - 1]--;
  //               break;
  //             }
  //           }
  //           ans[x].second = current;
  //           if (current == k)
  //             current = 1;
  //           else
  //             current++;
  //           count--;
  //           dbg(current);
  //         } else {
  //           if (ans[x].second == k)
  //             current = 1;
  //           else
  //             current = ans[x].second + 1;
 
  //           while (true) {
  //             if (colors[current - 1] == 0) {
  //               if (current == k)
  //                 current = 1;
  //               else
  //                 current++;
  //             } else {
  //               cout << current << " ";
  //               colors[current - 1]--;
 
  //               break;
  //             }
  //           }
  //           ans[x].second = current;
  //           if (current == k)
  //             current = 1;
  //           else
  //             current++;
  //           count--;
  //           dbg(current);
  //         }
  //       }
  //     }
 
  // dbg(n, a);
 
  // your code here
 
//   cout << "
";
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}