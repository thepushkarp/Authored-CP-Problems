import java.util.*;

public class logic{
    public static void main(String Args[]) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        while(t-->0) {
            int l = sc.nextInt();
            int n = sc.nextInt();
            int[] c = new int[n];
            int max = -1;
            for (int i = 0; i < n; i ++) {
                String ch;
                ch = sc.next();
                if(ch.charAt(0) == '-') {
                    c[i] = -Integer.parseInt(ch);
                }
                else {
                    c[i] = l - Integer.parseInt(ch);
                }
                max = c[i]>max?c[i]:max;
            }
            System.out.println(max);
        }
        sc.close();
    }
}