import java.util.*;
import java.lang.Math;

public class snakes{
    public static void main(String Args[]){
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        while(t-->0){
            int n, n0 = 0, n1 = 0;
            n = sc.nextInt();
            String b = sc.next();
            for (int i = 0; i < n; i++){
                if (b.charAt(i) == '1')
                    n1++;
                else
                    n0++;
            }
            if (n%2 == 1){
                if (n0%2 == 1){
                    System.out.println("Campus nahi banega");
                    continue;
                } else {
                    System.out.println(Math.min(n0, n1));
                    continue;
                }
            } else {
                if (n0%2 == 1){
                    System.out.println(n1);
                    continue;
                } else {
                    System.out.println(n0);
                    continue;
                }
            }
        }
    }
}
