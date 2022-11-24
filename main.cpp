#include <iostream>
using namespace std;

int main() {
   int b = 0, a = 1, c = 0, n = 0;
    cin >> n;
    for (int i=1; i>0; i++) {
        c = b + a;
        if (c <= n) {
            a = b;
            b = c;
            cout << c << endl;
        } else {
            break;
        }
    }
    
return 0;
   return 0;
}
