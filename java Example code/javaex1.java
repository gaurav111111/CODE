import java.lang.*;
import java.util.*;
class a
{
	public static void main(String arg[])
	{
		System.out.println(" enter the customer details\n ---------------------------\n");
		System.out.println(" person name-> \n person gender-> \n person age ->\n person city(metro or non metro)\n ");		
		Scanner sc=new Scanner(System.in);
		char name=sc.nextLine();
		char gen=sc.nextLine();
		int age=sc.nextInt();
		char city=sc.nextLine();
		if((age>=25 && age<=35) &&( gen=='Male' && city=='metro' ))
		System.out.println("premium is 6 %");
		


	}
}