package pattern;

import java.util.Scanner;

public class Sp24 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<n;i++) {
			for(int j=0;j<=i;j++) {
				System.out.print(i-j+1);
			}
			System.out.println();
		}
	}
}

/*

Output :-
Enter n :- 5
1
21
321
4321
54321

*/