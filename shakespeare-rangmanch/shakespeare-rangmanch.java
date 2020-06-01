import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            long a = sc.nextLong();
            long b = sc.nextLong();
            long lg = pow( 3, ceil( ( log( a )/log( 3 ) ) ) );
            if ( 2*b + 1 >= lg ) {
                long oneone = 2*b + 1;
                if ( (long)pow( 3, floor( log(oneone)/log(3) ) ) == oneone ) System.out.println("I defy you, stars");
                System.out.println("These violent delights have violent ends");
            }
            System.out.println("These violent delights have violent ends");
        }
        sc.close();
    }
}
