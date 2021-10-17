package pattern;

import java.util.Scanner;

public class Sp22 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<n;i++) {
			for(int j=0;j<i;j++) {
				System.out.print(i-j+1);
			}
			for(int k=0;k<=i;k++) {
				System.out.print(k+1);
			}
			System.out.println();
		}
	}
}

/*

Output :-
Enter n :- 5
1
212
32123
4321234
543212345

*/
