#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n;
    cin >> n;
    int count = 0;
    while(n>0){
        int b = n%10;
        if (n/10 > 0){
            count += 9;
        }
        else{
            count += b;
                } n = n/10;
    }
    cout << count <<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}