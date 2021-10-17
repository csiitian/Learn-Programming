package pattern;

import java.util.Scanner;

public class Sp29 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<2*n-1;i++) {
			System.out.print(Math.min(i+1,2*n-(i+1))+" ");
		}
		System.out.println();
		for(int i=0;i<2*n-1;i++) {
			System.out.print(Math.abs(n-i-1)+ " ");
		}
		System.out.println();
		for(int i=0;i<2*n;i++) {
			System.out.print((1+Math.min(i,2*n-i-1))+" ");
		}
	}
}

/*
 
Output :-
Enter n :- 5
1 2 3 4 5 4 3 2 1 
4 3 2 1 0 1 2 3 4 
1 2 3 4 5 5 4 3 2 1 

 */
