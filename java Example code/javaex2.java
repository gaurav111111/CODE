import java.lang.*;
import java.util.*;
class a
{
	public static void main(String arg[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println(" enter the customer details\n ---------------------------\n");
		System.out.print(" person name->"); 
		String name=sc.nextLine();
							
			System.out.print("\n person gender->");
		
		String gen=sc.nextLine();
			
			System.out.print(" \n person city->");
		String city=sc.nextLine();
                System.out.print("\n  person age ->");
		int age=sc.nextInt();
			System.out.print(" \n premium amount->");
		float pre=sc.nextLong();

		if((age>=25 && age<=35) &&( (gen.equals("male")) && (city.equals("metro")) ))
			{
				pre=pre*0.06f;
				System.out.println("premium is 6 %\n sum insured is ="+pre);
			}
		else if((age>=25 && age<=40) &&( (gen.equals("male")) && (city.equals("non-metro")) ))
			{
				pre=pre*0.04f;
				System.out.println("premium is 4 % \n sum insured is ="+pre);
			}
		else if((age>=25 && age<=42) &&( (gen.equals("female")) && (city.equals("metro")) ))
			{
				pre=pre*0.03f;
				System.out.println("premium is 3 %\n sum insured is ="+pre);
			}
		else if((age>=25 && age<=45) &&( (gen.equals("female")) && (city.equals("non-metro")) ))
			{
				pre=pre*0.02f;
				System.out.println("premium is 2 % \n sum insured is ="+ pre);
			}
		else	
			System.out.println("NOT insured");
		


	}
}