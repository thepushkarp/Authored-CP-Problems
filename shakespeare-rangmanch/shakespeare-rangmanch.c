#include <stdio.h>
#include <math.h>

int main() {
    long long t;
    scanf("%lld", &t);
    while( t-- ) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long lg = pow( 3, ceil( ( log( a )/log( 3 ) ) ) );
        if ( 2*b + 1 >= lg ) {
            long long oneone = 2*b + 1;
            if ( (long long)pow( 3, floor( log(oneone)/log(3) ) ) == oneone ) printf("I defy you, stars\n");
            else printf("These violent delights have violent ends\n");
        }
        else printf("These violent delights have violent ends\n");
    }
    return 0;
}
