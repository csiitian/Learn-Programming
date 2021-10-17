package blog;
import java.util.*;
public class P14_SwapTwoNumber1 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.printf("Before swap : a = %d and b = %d\n",a,b);
		int temp = a;
		a = b;
		b = temp;
		System.out.printf("After swap : a = %d and b = %d\n",a,b);
	}
}
