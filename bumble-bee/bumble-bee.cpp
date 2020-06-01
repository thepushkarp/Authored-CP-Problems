#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--) {
        int c;
        long long n;
        cin >> c >> n;
        cout << ((c*n*n*n)%1000000007) << "\n";
    }
    return 0;
}
