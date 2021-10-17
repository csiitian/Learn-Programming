package blog;
import java.util.Scanner;
public class P28_OddEvenNumber {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		if(num%2 == 0) System.out.printf("%d is even",num);
		else System.out.printf("%d is odd",num);
	}
}
