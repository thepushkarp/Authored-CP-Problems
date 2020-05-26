import java.util.*;

class logic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
            int n = sc.nextInt();
            StringBuilder pop = new StringBuilder(sc.next());
            int connec[] = new int[n];
            Arrays.fill(connec, 1);
            int d = sc.nextInt();
            int[] isol = new int[d];
            for (int i = 0; i < d; i++) {
                isol[i] = sc.nextInt();
            }

            Queue<Integer> q = new LinkedList<>();
            if (pop.charAt(0) == '1' && pop.charAt(1) == '0') {
                q.add(0);
            }
            for (int i = 1; i < n-1; i++){
                if (pop.charAt(i) == '1' && (pop.charAt(i-1) == '0' || pop.charAt(i+1) == '0')) {
                    q.add(i);
                }
            }
            if (pop.charAt(n-1) == '1' && pop.charAt(n-2) == '0') {
                q.add(n-1);
            }
            q.add(-1);

            for (int i = 0; i < d; i++) {
                connec[isol[i] - 1] = 0;
                if (q.peek() == -1) {
                    break;
                }
                else {
                    while (q.peek() != -1) {
                        int front = q.peek();
                        if (front > 0 && pop.charAt(front - 1) == '0' && connec[front] == 1) {
                            pop.setCharAt(front - 1, '1');
                            if (front > 1) {
                                if (pop.charAt(front - 2) == '0' && connec[front - 1] == 1) {
                                    q.add(front - 1);
                                }
                            }
                        }
                        if (front < n-1 && pop.charAt(front + 1) == '0' && connec[front + 1] == 1) {
                            pop.setCharAt(front + 1, '1');
                            if (front < n-2) {
                                if (pop.charAt(front + 2) == '0' && connec[front + 2] == 1) {
                                    q.add(front + 1);
                                }
                            }
                        }
                        q.remove();
                    }
                    q.add(-1);
                    q.remove();
                }
            }
            int infected = 0;
            for (int i = 0; i < n; i++) {
                if (pop.charAt(i) == '1') {
                    infected++;
                }
            }
            System.out.println(infected);
        }
        sc.close();
    }
}
