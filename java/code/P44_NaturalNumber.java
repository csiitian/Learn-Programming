package blog;

import java.util.Scanner;
public class P44_NaturalNumber {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number :- ");
		int num = sc.nextInt();
		System.out.println("All Natural Numbers upto n is :- ");
		for(int i=1;i<=num;i++) {
			System.out.print(i + " ");
		}
	}
}

/*
 * Output :- 
 * Enter number :- 12
 * All Natural Numbers upto n is :- 
 * 1 2 3 4 5 6 7 8 9 10 11 12 
 *
 */