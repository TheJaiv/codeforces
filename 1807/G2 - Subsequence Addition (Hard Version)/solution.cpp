#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    long long dic[n];
    long long sum = 1;
    bool possible = true;
 
    for (long long i = 0; i < n; i++) {
      cin >> dic[i];
    }
    sort(dic, dic + n);
    if (dic[0] != 1) {
      cout << "NO"<<endl;
      continue;
    } else {
      for (long long i = 1; i < n; i++) {
        if (dic[i] > sum) {
          possible = false;
          break;
        }
        sum += dic[i];
      }
    }
    if(possible == true) cout << "YES"<<endl;
    else cout << "NO"<<endl;
  }
}