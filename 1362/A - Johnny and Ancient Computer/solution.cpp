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
 
void solve() {
    ll a,b;
    cin >> a >> b;
    if ( a> b){
        if (a % b != 0) {
            cout << -1 << endl;
            return;
        }
        else{
            a = a/b;
            int ans = 0;
            while(a%8 == 0 ){
                ans++ ;
                a /= 8;
            }
            while(a%4 == 0 ){
                ans++ ;
                a /= 4;
            }
            while(a%2 == 0 ){
                ans++ ;
                a /= 2;
            }
            if (a != 1){
                cout << -1 << endl;
            }
            else cout << ans << endl;
            
        }
 
    }
    else if (b>a) {
        swap(a,b);
        if (a % b != 0) {
            cout << -1 << endl;
            return;
        }
        else{
            a = a/b;
            int ans = 0;
            while(a%8 == 0 ){
                ans++ ;
                a /= 8;
            }
            while(a%4 == 0 ){
                ans++ ;
                a /= 4;
            }
            while(a%2 == 0 ){
                ans++ ;
                a /= 2;
            }
            if (a != 1){
                cout << -1 << endl;
            }
            else cout << ans << endl;
            
        }
    }
    else{
        cout << 0 << endl;
    }
 
    
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
 
 