#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >> t;
while(t--){
    int n=0;
    cin >> n;
  
    int count = 0;
    int max = 0;
    for(int i=0; i <n ; i++){
        int a;
        cin >> a;
       
        if (a==0) {count++; }
        else{
            if(count > max)  max = count;
            count = 0;
        }
    }
    cout <<(count>max ? count : max) << endl;
}
}