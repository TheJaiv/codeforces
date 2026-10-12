#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n,m;
    cin >> n;
    cin >> m;
    int steps = 0;
    if (m>n) cout << -1 ;
    else{
        if ( n % 2 == 0){
            steps = n/2;
        }
        else{
            steps = (n-1)/2 +1;
        }
        if (steps % m != 0)
        steps += m - (steps % m);
        cout << steps;
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}