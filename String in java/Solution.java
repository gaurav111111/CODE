package learn;
import java.util.*;
import java.math.*;
public class solution {

    // Complete the solve function below.
    static void solve(double meal_cost, int tip_percent, int tax_percent) {
double tip= meal_cost * tip_percent/100;
       double t =  (meal_cost * tax_percent /100);
        meal_cost = meal_cost + tip + t;
        System.out.println("The total meal cost is "+meal_cost+ "dollars");
        System.out.println(tax_percent);
        System.out.println(tip_percent);
        int meal = (int) Math.round(meal_cost);
        System.out.println(meal);
        
       
        
        

    }

   

	private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
    	 System.out.println("enter the meal cost");
        double meal_cost = scanner.nextDouble();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        System.out.println("enter the tip");
        int tip_percent = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        System.out.println("enter the tax");
        int tax_percent = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        solve(meal_cost, tip_percent, tax_percent);

        scanner.close();
    }
}
