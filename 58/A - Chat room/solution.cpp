#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void solve() {
   
    char target[5] = {'h' ,'e', 'l' , 'l' ,'o'};
    string a;
    cin >> a;
    int j = 0;
    for (int i = 0;i<a.size() ; i++){
        char l = target[j];
        if (j==5) break;
        if (a[i] == l) j +=1;
 
 
    }
  
    if (j>=5) cout << "YES" <<endl;
    else cout << "NO" <<endl;
 
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     solve();
}