#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll l, n;
        cin >> l >> n;
        ll c[n];
        ll max = -1;
        for (int i = 0; i < n; i ++) {
            string ch;
            cin >> ch;
            if(ch[0] == '-') {
                c[i] = -stoi(ch);
            }
            else {
                c[i] = l - stoi(ch);
            }
            max = c[i]>max?c[i]:max;
        }
        cout << max << "\n";
    }
    return 0;
}