#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    ll n,p;
    cin >> n;
    cin >> p;
    // cout << n << p << endl;
    vector<pair<ll,ll>> a;
 
    for (int i = 0; i <n ; i++){
        ll b;
        cin >> b;
        // cout << b << endl;
        a.push_back({0,b});
        // cout << a[i].first <<endl;
    }
    for (int i = 0; i <n ; i++){
        ll b;
        cin >> b;
        a[i].first = b;
        // cout << b << endl;
        
 
 
    }
    ll count = n-1;
    ll money = p;
    ll i = 0;
    sort(a.begin(),a.end());
    while(count != 0){
        // cout << count << " "<< money << " "<< a[i].first << " "<< a[i].second << endl;
        if(a[i].first >= p){
            money += count*p;
            break;
        } 
        else{
            if(a[i].second <= count){
                money += (a[i].second)*(a[i].first);
                count -= a[i].second;
                i++;
 
            }
            else{
                money += count*a[i].first;
                break;
            }
        }
 
    }
    cout << money <<endl;
 
 
 
}
    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;         
    while (t--) solve();
}