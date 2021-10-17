/***
* Calculator Application
*/
import java.util.Scanner;
public class CalculatorICal {
  public static void main(String args[]) {
    System.out.println("Welcome, Hoping you are doing a great job");
    System.out.println("This is a calculator app to perform basic operations like addition,subtraction,multiplication and division");
    Scanner sc = new Scanner(System.in);
    int flag = 0;
    while(flag != 5) {
      System.out.println("Enter both numbers separated by space");
      int x = sc.nextInt();
      int y = sc.nextInt();
      System.out.println("Enter 1 for addition,2 for subtration,3 for multiplication,4 for divison and 5 for exit");
      flag = sc.nextInt();
      if(flag==1) {
          System.out.printf("%d + %d = %d\n",x,y,x+y);
      } else if(flag == 2) {
          System.out.printf("%d - %d = %d\n",x,y,x-y);
      } else if(flag == 3) {
          System.out.printf("%d * %d = %d\n",x,y,x*y);
      } else if(flag == 4) {
          System.out.printf("%d / %d = %d\n",x,y,x/y);
      } else if(flag == 5) {
        System.out.println("Thank you for using our service");
      } else {
        System.out.println("Sorry, you have entered invalid option");
      }
    }
    System.out.println("Have a great day");
  }
}