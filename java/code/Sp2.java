package pattern;
import java.util.*;
public class Sp2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter n :- ");
		int n = sc.nextInt();
		for(int i=0;i<n;i++) {
			for(int j=n;j>i;j--) {
				System.out.print("*");
			}
			System.out.println();
		}
	}
}

/*

Output :-
Enter n :- 5
*****
****
***
**
*

*/