package blog;
import java.util.Scanner;
public class P15_SwapTwoNumber2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.printf("Before swap : a = %d and b = %d\n",a,b);
		a = a + b; // now a is containing total sum
		b = a - b; 
		a = a - b; 
		System.out.printf("After swap : a = %d and b = %d\n",a,b);
	}
}
