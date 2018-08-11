package learn;

public class intintostring {

	public static void main(String[] args) {
		int a=10;
		System.out.println(a);

		System.out.println("memory address of a which is type of integer"+System.identityHashCode(a)); 
		String s =	Integer.toString(a);
		System.out.println(s);
		System.out.println("string value address "+Integer.toHexString(s.hashCode()));


		
		
		

	}

}
