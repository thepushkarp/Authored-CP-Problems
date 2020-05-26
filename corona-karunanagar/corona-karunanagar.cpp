#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, d;
        string pop;
        cin >> n;
        cin >> pop;
        int connec[n];
        for (ll i = 0; i < n; i++) {
            connec[i] = 1;
        }
        cin >> d;
        ll isol[d];
        for (ll i = 0; i < d; i++) {
            cin >> isol[i];
        }

        queue<ll> q;
        if (pop[0] == '1' and pop[1] == '0') {
            q.push(0);
        }
        for (int i = 1; i < n-1; i++){
            if (pop[i] == '1' and (pop[i-1] == '0' or pop[i+1] == '0')) {
                q.push(i);
            }
        }
        if (pop[n-1] == '1' and pop[n-2] == '0') {
            q.push(n-1);
        }
        q.push(-1);

        for (ll i = 0; i < d; i++) {
            connec[isol[i] - 1] = 0;
            if (q.front() == -1) {
                break;
            }
            else {
                while (q.front() != -1) {
                    ll front = q.front();
                    if (front > 0 and pop[front - 1] == '0' and connec[front] == 1) {
                        pop[front - 1] = '1';
                        if (front > 1) {
                            if (pop[front - 2] == '0' and connec[front - 1] == 1) {
                                q.push(front - 1);
                            }
                        }
                    }
                    if (front < n-1 and pop[front + 1] == '0' and connec[front + 1] == 1) {
                        pop[front + 1] = '1';
                        if (front < n-2) {
                            if (pop[front + 2] == '0' and connec[front + 2] == 1) {
                                q.push(front + 1);
                            }
                        }
                    }
                    q.pop();
                }
                q.push(-1);
                q.pop();
            }
        }
        ll infected = 0;
        for (ll i = 0; i < n; i++) {
            if (pop[i] == '1') {
                infected++;
            }
        }
        cout << infected << "\n";
    }
    return 0;
}
