#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        long long n;
        long long m;
        cin >> n >> m;
 
        vector<long long> infected(m);
        for (long long i = 0; i < m; i++) cin >> infected[i];
        sort(infected.begin(), infected.end());
 
        vector<long long> uninf_clubs;
        long long count = 0;
        for (long long i = 0; i < m - 1; i++) {
            uninf_clubs.push_back(infected[i + 1] - infected[i] - 1);
            count += infected[i + 1] - infected[i] - 1;
        }
        uninf_clubs.push_back((n - infected[m - 1]) + infected[0] - 1);
        count += (n - infected[m - 1]) + infected[0] - 1;
 
        long long protected_ = 0;
        long long cu_pro = 0;
        sort(uninf_clubs.begin(), uninf_clubs.end());
 
        while (count > 0 && m > 0 && count > 0) {
            if (cu_pro == 0) {
                protected_ += 1;
                cu_pro += 1;
                count -= 1;
                for (long long i = 0; i < m - 1; i++) {
                    if (uninf_clubs[i] >= 2) {
                        uninf_clubs[i] -= 2;
                        count -= 2;
                    } else if (uninf_clubs[i] == 1) {
                        uninf_clubs[i] -= 1;
                        count -= 1;
                    }
                }
                if (uninf_clubs[m - 1] >= 2) {
                    uninf_clubs[m - 1] -= 2;
                    count -= 1;
                } else if (uninf_clubs[m - 1] == 1) {
                    uninf_clubs[m - 1] -= 1;
                }
            } else if (cu_pro == 1) {
                cu_pro = 0;
                for (long long i = 0; i < m - 1; i++) {
                    if (uninf_clubs[i] >= 2) {
                        uninf_clubs[i] -= 2;
                        count -= 2;
                    } else if (uninf_clubs[i] == 1) {
                        uninf_clubs[i] -= 1;
                        count -= 1;
                    }
                }
                protected_ += uninf_clubs[m - 1];
                count -= uninf_clubs[m - 1];
                uninf_clubs.pop_back();
                m -= 1;
            }
        }
        cout << n - protected_ << "
";
    }
    return 0;
}