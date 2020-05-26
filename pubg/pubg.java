import java.util.*;

public class logic {
	public static void main(String[] args) {
		int t;
		Scanner s = new Scanner(System.in);
		t = s.nextInt();
		while(t-->0) {
			int d, p, d2, d4;
			p = s.nextInt();
			d = s.nextInt();
			d = p - d;
			d2 = d/2;
			d4 = d/4;
			long count = d2*(d4 + 1) - d4*d4 + 1;
			System.out.println(count);
		}
		s.close();
	}
}
