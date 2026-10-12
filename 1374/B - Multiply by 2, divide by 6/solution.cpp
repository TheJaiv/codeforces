#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n,tows= 0 , thre = 0;
    cin >> n;
    if (n==1 ) {cout << 0 <<endl; return;}
    while(1){
        if (n % 2 == 0){
            tows++;
            n /= 2;}
        else
        {
            break;
        }
        
    }
    while(1){
        if (n % 3 == 0){
            thre++;
            n /= 3;}
        else
        {
            break;
        }
        
    }
    if (n>1) cout << -1 << endl;
    else if (tows>thre) cout << -1 <<endl;
    else cout << 2*thre - tows << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}