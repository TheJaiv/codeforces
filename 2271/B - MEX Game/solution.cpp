#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        unordered_map<int, int> dic;
        dic.reserve(n * 2);
       
        
 
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            dic[a]++;
        }
 
     
        int M = 0;
        while (true) {
            int c = 0;
            if (dic.find(M) != dic.end()) {
                c = dic[M];
            }
            if (c >= 2 * k) {
                M++;
            } else {
                break;
            }
        }
 
        int c = 0;
        if (dic.find(M) != dic.end()) {
            c = dic[M];
        }
 
        if (c == 2 * k - 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}