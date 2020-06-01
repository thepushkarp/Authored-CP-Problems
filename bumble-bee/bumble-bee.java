import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {
    public static void main (String[] args) {
        Scanner sc = new Scanner (System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            long c = sc.nextInt();
            long n = sc.nextInt();
            BigInteger r = BigInteger.valueOf(c*n*n*n).mod(BigInteger.valueOf(1000000007));
            System.out.println(r);
        }
        sc.close();
    }
}
