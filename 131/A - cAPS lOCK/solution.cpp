#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
    string a;
    cin >> a;
    bool mistake = true;
    bool first = false;
 
    if (int(a[0]) < 91  ) first = true;
 
 
    for (int i =1 ; i < a.size() ; i ++){
        if (int(a[i]) > 91 ) mistake = false;
    }
    if (mistake == false) cout << a <<endl;
    else{
        if (first == true){
            
            for (int i = 0 ; i < a.size() ; i++){
                cout << char(int(a[i])+32);
            }
        }
        else{
            cout <<  char(int(a[0])-32);
            for (int i = 1 ; i < a.size() ; i++){
                cout << char(int(a[i])+32);
            }
        }
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}