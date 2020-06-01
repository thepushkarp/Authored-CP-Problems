#include <stdio.h>

int main(){
    long long int t;
    scanf("%lld", &t);
    while(t--) {
        long long int n, n0 = 0, n1 = 0;
        scanf("%lld", &n);
        char b[n+1];
        scanf("%s", b);
        for (int i = 0; i < n; i++){
            b[i] == '1'? n1++: n0++;
        }
        if (n&1) {
            if (n0&1) {
                printf("Campus nahi banega\n");
                continue;
            } else {
                long long int min = n0<n1?n0:n1;
                printf("%lld\n", min);
                continue;
            }
        } else {
            if (n0&1) {
                 printf("%lld\n", n1);
                 continue;
             } else {
                 printf("%lld\n", n0);
                 continue;
             }
        }
    }
    return 0;
}
