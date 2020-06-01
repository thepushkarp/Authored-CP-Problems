#include <stdio.h>
 
int linSearch(int arr[], int x, int l) {
    for (int i = 0; i < l; i++) {
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}
int clinSearch(char arr[], char x, int l) {
    for (int i = 0; i < l; i++) {
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}
 
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int l, m, n;
        scanf("%d %d %d", &l, &m, &n);
        int b[m], c[n];
        char a[l];
        scanf("%*c");
        for (int i = 0; i < l; i++) {
            scanf("%c%*c", &a[i]);
        }
        for (int i = 0; i < m; i++) {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &c[i]);
        }
        int q, r;
        char p;
        scanf("%*c");
        scanf("%c %d %d", &p, &q, &r);
        int ap = clinSearch(a, p, l);
        int aq = linSearch(b, q, m);
        int ar = linSearch(c, r, n);
        if ((ap == -1) || (aq == -1) || (ar ==-1)) {
            printf("DOST HI SAANP HAI\n");
        } else {
            printf("SNAKE FOUND\n");
        }
    }
    return 0;
}
