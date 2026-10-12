#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a[n];
        for(long long i = 0; i < n ; i++){
            long long m ;
            cin >> m;
            vector<long long> arr(m);
            for(long long j = 0; j <m ; j++){
                cin >> arr[j];
                
            }
            sort(arr.begin(),arr.end());
            a[i]=arr;
        }
        long long min[n];
        long long sec_min[n];
        for(long long i= 0; i < n ; i++){
           min[i] = a[i][0];
           sec_min[i] = a[i][1];
        
        
 
        }
        sort(min,min+n);
        sort(sec_min,sec_min+n);
        long long sum1 = 0;
        sum1 += min[0];
 
    
        // cout << sum1<< "i" << endl;    
        for(long long i = 1;i<n ; i++) {
            sum1+= sec_min[i];
            // cout << sum1<< "j" << endl;
        }
        cout << sum1 << "
";
        
        
    }
    
}