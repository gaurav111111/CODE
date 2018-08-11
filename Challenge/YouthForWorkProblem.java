import java.util.Scanner;
class eq{
	public long power(long base,long exponent )
	{
		long result=1;
		while (exponent != 0)
        {
            result *= base;
            --exponent;
        }

		return result;
	}
	 public  int len(String ab){
	        char[] ac = ab.toCharArray();
	        int i = 0, k = 0;

	        try{
	            for(i=0,k=0;ac[i]!='\0';i++)
	                k++;
	        }
	        catch(Exception e){
	        }
	        return k;
	    }
}

public class com {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	
		Scanner sc = new Scanner(System.in);
		eq e=new eq();

		long sum = 0;

		int N = sc.nextInt();

		for (int i = 0; i < N; i++) {

		final long x = sc.nextLong(); // read input

		String str = Long.toString((long) e.power(1 << 1, x));
		if(e.len(str)>2)
		{
			str=str.substring(e.len(str) - 2);
		}
		else
		{
			str=str;
		}

		sum += Integer.parseInt(str);

		}

		System.out.println(sum%100);

	}

}
