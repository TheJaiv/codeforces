#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    int n,count = 0, current = 0;
    cin >> n;
    string a;
    cin>> a;
    for(int i = 0; i < n; i++){
        if (a[i] == '(') current++;
        else {
            if (current == 0) count++;
            else current--;
        }
    }
    cout << count << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}