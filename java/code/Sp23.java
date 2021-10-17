package pattern;

import java.util.Scanner;

public class Sp23 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=1;i<=n;i++) {
			System.out.print((3*i-1)/2);
			if(i%2 == 0) {
				System.out.print((3*i+1)/2);
			}
			System.out.println();
		}
	}
}

/* 

Output :-
Enter n :- 5
1
23
4
56
7

*/