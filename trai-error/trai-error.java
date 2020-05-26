import java.util.*;
import java.lang.Math;

public class logic{
	public static int count;
	public static void heron(int[] sd, int s){
		if(Math.sqrt( s * (s-sd[0]) * (s-sd[1]) * (s-sd[2]) ) == Math.floor(Math.sqrt( s * (s-sd[0]) * (s-sd[1]) * (s-sd[2]) ))){
			count+=1;
			// System.out.println(sd[0] + " " + sd[1] + " " + sd[2]);
		}
	}

	public static void sidesFromPerim(int p){
		int[] sd = new int[3];
		for(sd[0] = 1; sd[0] <= p / 2; sd[0]++){
			for(sd[1] = 1; sd[1] + sd[0] < p; sd[1]++){
				sd[2] = p - (sd[0] + sd[1]);
				if ( sd[0] + sd[1] <= sd[2] || sd[0] + sd[2] <= sd[1] || sd[1] + sd[2] <= sd[0] )
					continue;
				if (sd[0] <= sd[1] && sd[1] <= sd[2])
					heron(sd, p/2);
			}
		}
	}

	public static void main(String[] Args){
		Scanner sc = new Scanner(System.in);
		int t;
		t = sc.nextInt();
		while(t-->0){
			int p;
			p = sc.nextInt();
			count = 0;
			sidesFromPerim(p);
			System.out.println(count);
		}
	}
}
