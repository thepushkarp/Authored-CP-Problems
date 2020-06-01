#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int p, d, d2, d4;
        scanf("%d %d", &p, &d);
        d = p - d;
        d2 = d/2;
        d4 = d/4;
        long long count = d2*(d4 + 1) - d4*d4 + 1;
        printf("%lld\n", count);
    }
    return 0;
}
