// Local build: g++ -std=c++23 -O2 -Wall -Wextra -DLOCAL template.cpp -o a
// Judge build: no -DLOCAL, so all dbg() calls compile to nothing.
#include <bits/stdc++.h>
using namespace std;
#define frg for(int i=0;i<n;i++)
#define frr(i,a,b) for(int i=a;i<b;i++)
#define inp_vec(n) vector <ll> v(n); frg{cin>>v[i];}
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
 
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
int N=1e9;
long long getSmallestPrimeFactor(long long n) {
    if (n < 2) return -1; 
    if (n % 2 == 0) return 2;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
 
 
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    
    
    return (a / gcd(a, b)) * b; 
}
 
map<long long, int> getPrimeFactors(long long n) {
    map<long long, int> factors;
 
    for (long long i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1) factors[n]++;  
    return factors;
}
 
set<long long> getDivisors(long long n) {
    set<long long> divisors;
    
    
    if (n < 1) return divisors;
 
    
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.insert(i);     
            divisors.insert(n / i); 
        }
    }
    
    return divisors;
}
 
bool isPrime(int n) {
    
    if (n <= 1) return false;
    
    
    if (n == 2) return true;
    
   
    if (n % 2 == 0) return false;
 
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
 
    return true;
}
long long nCr(int n, int r) {
    
    if (r < 0 || r > n) return 0;
    if (r == 0 || r == n) return 1;
 
    if (r > n - r) {
        r = n - r;
    }
 
    long long ans = 1;
    for (int i = 1; i <= r; i++) {
        ans *= (n - r + i);
        ans /= i;
    }
    return ans;
}
 ll modpow(ll a, ll b,ll MOD){
    ll res = 1;
    while(b){
        if(b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
 
 
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
 
    string s;
    cin >> s;
 
    long long have_B, have_S, have_C;
    cin >> have_B >> have_S >> have_C; 
 
    long long price_B, price_S, price_C;
    cin >> price_B >> price_S >> price_C; 
 
    long long money;
    cin >> money;
 
    long long count_of_B = 0;
    long long count_of_S = 0;
    long long count_of_C = 0;
 
    for (long long i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            count_of_B++;
        else if (s[i] == 'S')
            count_of_S++;
        else
            count_of_C++;
    }
    long long low = 0;
 
    long long high = 1e13;
    long long ans;
 
    while (low <= high)
    {
        long long mid = (low + high) / 2;
 
        long long money_needed = 0;
 
        money_needed += max(0LL, mid * count_of_B - have_B) * price_B;
        money_needed += max(0LL, mid * count_of_S - have_S) * price_S;
        money_needed += max(0LL, mid * count_of_C - have_C) * price_C;
 
        if (money_needed <= money)
        {
            ans = mid; 
            low = mid + 1;
        }
        else
        {
            high = mid - 1; 
        }
    }
 
    cout << ans << endl;
 
 
 
 
    
    // your code here
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
 