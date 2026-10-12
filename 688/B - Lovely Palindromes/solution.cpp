#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    string n;
    cin >> n;
 
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] ;
    }
    for (int i = n.size()-1;  i >= 0 ; i--)
    {
        cout << n[i] ;
    }
    
    
 
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}