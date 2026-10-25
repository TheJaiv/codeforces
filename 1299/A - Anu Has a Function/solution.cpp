#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for (auto &x : a) scanf("%d", &x);
 
    int best = 0;                       // index of element to put first
    for (int b = 30; b >= 0; b--) {     // 10^9 < 2^30
        int cnt = 0, idx = -1;
        for (int i = 0; i < n; i++)
            if ((a[i] >> b) & 1) { cnt++; idx = i; }
        if (cnt == 1) { best = idx; break; }
    }
 
    swap(a[0], a[best]);
    for (int x : a) printf("%d ", x);
    printf("
");
}