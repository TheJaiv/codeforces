#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int blocks = 0;
        int prev = 0;
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            if (b != 0 && prev == 0) blocks++;
            prev = b;
        }
        cout << min(blocks, 2) << '
';
    }
}