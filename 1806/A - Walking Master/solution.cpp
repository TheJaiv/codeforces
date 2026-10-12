#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--){
    long long a,b,c,d;
    cin >> a; cin >>b; cin >>c; cin>>d;
    if (d==b and a<c) cout <<-1<<endl;
    else if ((d-b>=0 and ((a+(d-b)) >= c )) or (d-b<=0 and ((a+(b-d) <= c) and (a-(b-d) >= c)))) cout << (abs(d-b) + (a+abs(d-b))-c)<<endl;
    
    else cout << -1 << endl;
}
}