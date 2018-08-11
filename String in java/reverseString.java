package learn;

public class reversestring {

	public static void main(String[] args) {
		String name = "this is the code of string handling ";
		System.out.println(name);
		int l = name.length();
		System.out.println(l);
		String rev= "";
		for (int i=name.length()-1;i>=0;i--)	
		{
			
			rev=rev +name.charAt(i);
		}
		System.out.println(rev);
	}

}
