#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--) {
        long long n, n0 = 0, n1 = 0;
        cin >> n;
        string b;
        cin >> b;
        for (int i = 0; i < n; i++){
            b[i] == '1'? n1++: n0++;
        }
        if (n&1) {
            if (n0&1) {
                cout << "Campus nahi banega\n";
                continue;
            } else {
                cout << min(n0, n1) << "\n";
                continue;
            }
        } else {
            if (n0&1) {
                 cout << n1 << "\n";
                 continue;
             } else {
                 cout << n0 << "\n";
                 continue;
             }
        }
    }
    return 0;
}
