#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        int ans = 0;
 
        for (int i = 0; i < n-1; i++)
        {
            int k;
            cin >> k;
            ans += k;
        }
 
        cout << -ans << endl;
        
    }
    
}