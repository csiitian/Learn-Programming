package blog;
import java.util.*;
public class P27_PosNegNumber {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		if(num >= 0) System.out.printf("%d is positive",num);
		else System.out.printf("%d is negative",num);
	}
}
