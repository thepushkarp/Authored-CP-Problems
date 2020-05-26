#include <stdio.h>
#include <stdlib.h>
#define ll long long

int main() {
    ll t;
    scanf("%lld", &t);
    while(t--) {
        ll l, n;
        scanf("%lld %lld", &l, &n);
        ll c[n];
        ll max = -1;
        for (int i = 0; i < n; i ++) {
            char ch[10];
            scanf("%s", ch);
            if(ch[0] == '-') {
                c[i] = - atoi(ch);
            }
            else {
                c[i] = l - atoi(ch);
            }
            max = c[i]>max?c[i]:max;
        }
        printf("%lld\n", max);
    }
    return 0;
}