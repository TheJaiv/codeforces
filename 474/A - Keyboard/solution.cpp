#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    char dir;
    cin >> dir;
 
    string typed;
    cin >> typed;
 
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int shift = (dir == 'R') ? -1 : 1;
 
    string result = "";
    for (char c : typed) {
        size_t pos = keyboard.find(c);
        result += keyboard[pos + shift];
    }
 
    cout << result << "
";
 
    return 0;
}