import java.lang.*;
import java .util.*;
	
class calc
{
	
		
		 int n1,n2,sum;
		public void input()
		{		
			Scanner sc = new Scanner(System.in);
			System.out.println(" enter the value of n1 & n2 ");
			
			n1=sc.nextInt();
			n2=sc.nextInt();
		}
		public int  add()
		{
			
		   sum= n1+n2;
		   return sum;
		}
		public void output()
		{
			
			System.out.println("value of addition =" +sum);
		}
		 
	
}
class main
{

public static void main(String arg[])
	{
		calc c1= new calc() ;
		c1.input();
		c1.add();
		c1.output();
	}
}