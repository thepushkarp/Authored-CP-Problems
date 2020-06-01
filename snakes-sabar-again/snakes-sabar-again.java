import java.util.*;
 
public class logic {
    public static int linSearch(int[] arr, int x, int l, int r) {
        for (int i = l; i <= r; i++) {
            if (arr[i] == x) {
                return i;
            }
        }
        return -1;
    }
    public static int linSearch(char[] arr, char x, int l, int r) {
        for (int i = l; i <= r; i++) {
            if (arr[i] == x) {
                return i;
            }
        }
        return -1;
    }
 
    public static void main(String[] args) {
        int t;
        Scanner s = new Scanner(System.in);
        t = s.nextInt();
        while(t-->0) {
            int l = s.nextInt();
            int m = s.nextInt();
            int n = s.nextInt();
            int[] b = new int[m];
            int[] c = new int[n];
            char[] a = new char[l];
            for (int i = 0; i < l; i++) {
                a[i] = s.next().charAt(0);
            }
            for (int i = 0; i < m; i++) {
                b[i] = s.nextInt();
            }
            for (int i = 0; i < n; i++) {
                c[i] = s.nextInt();
            }
            char p = s.next().charAt(0);
            int q = s.nextInt();
            int r = s.nextInt();
            int ap = linSearch(a, p, 0, l-1);
            int aq = linSearch(b, q, 0, m-1);
            int ar = linSearch(c, r, 0, n-1);
            if ((ap == -1) || (aq == -1) || (ar ==-1)) {
                System.out.println("DOST HI SAANP HAI");
            } else {
                System.out.println("SNAKE FOUND");
            }
        }
    }
}
