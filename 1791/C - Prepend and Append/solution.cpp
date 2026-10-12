#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string a;
    cin >> a;
    // cout << a <<endl;
    
    if (n % 2 == 0) {
      int count = 0;
      for (int i = 0; i < (n / 2); i++) {
        if (a[i] != a[n -1 - i])
          count++;
        else
            break;
      }
      cout << n - 2*count << endl;
    } else {
      int count = 0;
      for (int i = 0; i < (n - 1) / 2; i++) {
        if (a[i] != a[n -1 - i])
          count++;
        else break;
      }
      cout << (n - (2*count)) << endl;
    }
  }
}