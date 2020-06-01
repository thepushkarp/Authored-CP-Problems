import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int t = sc.nextInt();
         while(t-- > 0) {
             int r = sc.nextInt();
             double ar = 0.4194*r*r;
             System.out.printf("%.2f\n",ar);
         }
         sc.close();
    }
}
